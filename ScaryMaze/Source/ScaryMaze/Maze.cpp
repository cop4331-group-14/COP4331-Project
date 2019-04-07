// Fill out your copyright notice in the Description page of Project Settings.

#include "Maze.h"
#include "Engine/GameEngine.h"



// The orientation of the maze within the world in Unreal is like so:
//						DIMENSION
//	Origin--------------------------------------> Positive X-axis
//		|	_______________________________	
//	D	|	|__|__|__|__|__|__|__|__|__|__|
//	I	|	|__|__|__|__|__|__|__|__|__|__|
//	M	|	|__|__|__|__|__|__|__|__|__|__| <-Row
//	E	|	|__|__|__|__|__|__|__|__|__|__|
//	N	|	|__|__|__|__|__|__|__|__|__|__|
//	S	|	|__|__|__|__|__|__|__|__|__|__|
//	I	|	|__|__|__|__|__|__|__|__|__|__|
//	O	|	|__|__|__|__|__|__|__|__|__|__|
//	N	|	|__|__|__|__|__|__|__|__|__|__|
//		|	|__|__|__|__|__|__|__|__|__|__|
//		V						  ^
//  Positive Y-axis				  |
//								Column
//
// The Positive Z-axis comes out toward the reader. This orientation is used when discussing
// Cells that are top, bottom, left or right. Also, the indices in the MazeWalls array begin
// at the top-left corner and number left to right, top to bottom. The diagram is slightly misleading
// in order for it to be legible. The maze is actually pushed up against the origin.


// Sets default values
AMaze::AMaze()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AMaze::BeginPlay()
{
	Super::BeginPlay();

	// Get the game level and determine Dimension and Size.
	UScaryMazeGameInstance* Instance = Cast<UScaryMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	Dimension = Instance->Level * BASE_DIMENSION;
	Size = Dimension * Dimension;

	// Maze walls and ground are created separately.
	CreateMaze();
	GenerateGround();
}

// This calls SpawnGround to allow the ground to cover the same area as the maze.
void AMaze::GenerateGround()
{
	for (int Cell = 0; Cell < Size; Cell++)
	{
		FVector Location = FVector((Cell % Dimension) * WALL_BLOCK_SIZE, (Cell / Dimension) * WALL_BLOCK_SIZE, Z_COORD_GROUND);
		SpawnGround(Location);
	}
}

// This actually cuts the path of the maze based on which walls have been visited.
void AMaze::RemoveWalls()
{
	// Loop through the MazeWalls array
	for (int Cell = 0; Cell < Size; Cell++)
	{
		// If we visited this wall, it is part of the maze path. The method of hiding the wall and disabling collision
		// is preferred over Unreal's Destroy() method as we still have access to the attributes of these disabled
		// walls, such as accessing their location.
		if (MazeWalls[Cell]->GetIsVisited())
		{
			// Disable this Wall's collision.
			MazeWalls[Cell]->SetActorEnableCollision(false);
			// Hide this Wall so you can't see it in the game.
			MazeWalls[Cell]->SetActorHiddenInGame(true);
		}
	}
}

// Since the start position is on the left side of the maze, the goal will be chosen from
// the right side of the maze.
void AMaze::SelectGoal()
{
	// A counter used to detect an error.
	int Counter = 1;

	// Loop until we find a spot in the second to last column that is not a wall.
	while (true)
	{
		// Due to the nature of the maze construction algorithm, odd numbered dimensions
		// have one wall on the far right, while even numbered dimensions have two walls
		// on the right. This means we have to differentiate where the goal can be.
		if (Dimension % 2 != 0)
		{
			GoalIndex = (((rand() % (Dimension - 2)) + 2) * Dimension) - 2;
		}
		else
		{
			GoalIndex = (((rand() % (Dimension - 2) + 2) * Dimension) - 3);
		}
		// Break when we find a spot that is visited as this must be a path.
		if (MazeWalls[GoalIndex]->GetIsVisited())
		{
			break;
		}

		// If we have looped 1000 times and not found a suitable goal, we assume something must be wrong.
		if (Counter == 1000)
		{
			UE_LOG(LogTemp, Fatal, TEXT("Couldn't find a suitable goal."));
		}
		Counter++;
	}

	// Find the goal's location.
	FVector Location = MazeWalls[GoalIndex]->GetActorLocation();
	// Raises the Goal a little off the ground.
	Location.Z = Z_COORD_GOAL;
	// Spawn the goal.
	SpawnGoal(Location);
}

// This calls all the functions to get the walls of the maze constructed, as well as selecting a start and goal
// for the maze.
void AMaze::CreateMaze()
{
	// Seed the random number generator.
	srand(time(NULL));

	// Call the functions that actually get the maze constructed.
	InitializeMaze();
	StartIndex = SelectStart();
	MazeConstructorLoop();
	SelectGoal();
	RemoveWalls();
}

// Initially, the maze area will be completely filled with walls. The walls will be removed later in order to 'cut' the
// path of the maze.
void AMaze::InitializeMaze()
{
	for (int Cell = 0; Cell < Size; Cell++)
	{
		// Location of Wall calculated from the index of Wall in the MazeWalls array, the size of the array,
		// the size of the walls, and the offset of the wall's center in Unreal.
		FVector Location;
		float Xcoord = (float)(Cell % Dimension * WALL_BLOCK_SIZE + WALL_OFFSET);
		float Ycoord = (float)(Cell / Dimension * WALL_BLOCK_SIZE + WALL_OFFSET);
		Location.Set(Xcoord, Ycoord, Z_COORD_WALL);

		// Spawn the wall in the world.
		MazeWalls.Add(SpawnWall(Location));

		// If it's a boundary wall, we will set both boundary and visited to true
		// so that we don't consider it when 'cutting' out the maze path.
		if (IsOnOrOutOfBounds(Cell))
		{
			MazeWalls[Cell]->SetIsBoundary(true);
		}
	}
}


// This is the function that actually creates the maze. By design, the 'next' cell from the current one
// is always two cells away. The current cell, next cell, and the cell between them are 'cut' from the maze.
// This allows parts of the maze to still have walls. For example:
// 1 is current cell, 2 is next cell, and 3 is the cell between. X is an already cut path.
// _______
// |X|_|X|
// |X|_|X|
// |1|3|2|
// |_|_|_|
void AMaze::MazeConstructorLoop()
{
	// The index we are currently at.
	int CurrentIndex = StartIndex;

	// The index we plan on visiting next.
	int NextIndex;

	// A stack to hold indices to be used for backtracking.
	TArray<int> BacktrackStack;

	// Push the CurrentIndex/StartIndex onto the stack in case we need to come back to this point.
	BacktrackStack.Push(CurrentIndex);

	// As long as there are items we can backtrack to, the maze can still be constructed. So we want to loop until
	// there are no more items in the BacktrackStack.
	while (BacktrackStack.Num() > 0)
	{
		// We are at this index, so the cell is visited.
		MazeWalls[CurrentIndex]->SetIsVisited(true);


		// Get the next index of a cell two cells away, but adjacent to the current one.
		// That is two cells above, left, right, or below the current one. 
		NextIndex = GetNextIndex(CurrentIndex);

		// If we have a NextIndex, mark the cell between the current and next as visited.
		// Make NextIndex the CurrentIndex and push it onto BacktrackStack in case we need
		// to backtrack to it.
		if (NextIndex)
		{
			// Add the current cell to the MazePath array
			MazePath.Add(MazeWalls[CurrentIndex]);

			// The cell between current and next is always the mean of current and next.
			// Mark as visited so it 'cuts' a path.
			MazeWalls[(CurrentIndex + NextIndex) / 2]->SetIsVisited(true);
			// ..And add it to MazePath array.
			MazePath.Add(MazeWalls[(CurrentIndex + NextIndex) / 2]);
			CurrentIndex = NextIndex;
			BacktrackStack.Push(CurrentIndex);
		}
		else
		{
			// NextIndex was NULL, which means we need to backtrack.
			CurrentIndex = BacktrackStack.Pop();
		}
	}
}

// Check if possible cell is within bounds or if it is on or outside of bounds.
bool AMaze::IsOnOrOutOfBounds(int Cell)
{
	bool bTopRow = Cell < Dimension;
	bool bRightColumn = Cell % Dimension == Dimension - 1;
	bool bBottomRow = Cell >= Dimension * Dimension - Dimension;
	bool bLeftColumn = Cell % Dimension == 0;

	// Out of bounds.
	if (Cell < 0 || Cell > Dimension * Dimension - 1)
	{
		return true;
	}
	// On the boundary.
	else if (bTopRow || bRightColumn || bBottomRow || bLeftColumn)
	{
		return true;
	}
	// In bounds.
	else
	{
		return false;
	}
}

// The starting point of the maze will be somewhere in the second column by design. Note that the first column
// is a boundary and cannot be used. The same is true of the first and last cells of this column. Therefore,
// the valid starting indices range from 1 * DIMENSION + 1 through DIMENSION * (DIMENSION - 2) + 1. For example,
// a 9x9 maze has possible starting indices of 10, 19, 28, 37, 46, 55, 64. So we will generate a random
// integer from 1 to DIMENSION - 2, then multiply it by DIMENSION and add 1.
int AMaze::SelectStart()
{
	return (((rand() % (Dimension - 2)) + 1) * Dimension) + 1;
}

// We want to randomly choose the index of one of the cells cardinally adjacent to the current index's cell (top,
// right, bottom, left) but is two cells away in order to leave space for walls. The cell of the index we choose must be valid.
int AMaze::GetNextIndex(int CurrentIndex)
{
	// Since the maze is stored as a 1D array, the following calculations are needed to find adjacent cells.
	int TopIndex = CurrentIndex - 2 * Dimension;
	int RightIndex = CurrentIndex + 2;
	int BottomIndex = CurrentIndex + 2 * Dimension;
	int LeftIndex = CurrentIndex - 2;

	// Holds potential, valid indices for NextIndex.
	TArray<int> PossibleIndices;

	// Check each of the possible next indices. If they are valid, add them to the array.
	if (IsValidIndex(TopIndex))
	{
		PossibleIndices.Add(TopIndex);
	}
	if (IsValidIndex(RightIndex))
	{
		PossibleIndices.Add(RightIndex);
	}
	if (IsValidIndex(BottomIndex))
	{
		PossibleIndices.Add(BottomIndex);
	}
	if (IsValidIndex(LeftIndex))
	{
		PossibleIndices.Add(LeftIndex);
	}
	if (PossibleIndices.Num() == 0)
	{
		// There is no valid NextIndex.
		return NULL;
	}

	// Return a random NextIndex from the possible indices.
	int RandomIndex = rand() % PossibleIndices.Num();
	return PossibleIndices[RandomIndex];
}

// Tells us if a potential NextIndex is valid or not. An index is valid only if it is not on or outside a boundary
// and it is not visited.
bool AMaze::IsValidIndex(int PotentialIndex)
{
	if (!IsOnOrOutOfBounds(PotentialIndex) && !MazeWalls[PotentialIndex]->GetIsVisited())
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Spawns an instance of AWall and returns this instance.
AWall* AMaze::SpawnWall(FVector Location)
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;

		return GetWorld()->SpawnActor<AWall>(Wall, Location, FRotator::ZeroRotator, SpawnParams);
	}
	else
	{
		return NULL;
	}
}

// Spawns an instance of AGround and returns this instance.
AGround* AMaze::SpawnGround(FVector Location)
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;

		return GetWorld()->SpawnActor<AGround>(Ground, Location, FRotator::ZeroRotator, SpawnParams);
	}
	else
	{
		return NULL;
	}
}

// Spawns an instance of AGoal and returns this instance.
AGoal* AMaze::SpawnGoal(FVector Location)
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;

		return GetWorld()->SpawnActor<AGoal>(Goal, Location, FRotator::ZeroRotator, SpawnParams);
	}
	else
	{
		return NULL;
	}
}

// Returns the index in the MazeWalls array where the player starts.
int AMaze::GetStartIndex()
{
	return StartIndex;
}

// Returns the index in the MazeWalls array that has the goal.
int AMaze::GetGoalIndex()
{
	return GoalIndex;
}

// Returns the MazeWalls array.
TArray<AWall*> AMaze::GetMazeWalls()
{
	return MazeWalls;
}

// Returns the MazePath TArray
TArray<AWall*> AMaze::GetMazePath()
{
	return MazePath;
}

// Called every frame. The default Unreal tick function.
void AMaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

