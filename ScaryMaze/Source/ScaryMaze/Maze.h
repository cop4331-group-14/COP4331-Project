// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wall.h"
#include "Goal.h"
#include "time.h"
#include "Ground.h"
#include "Engine/World.h"
#include "Maze.generated.h"

#define DIMENSION 25

// Some constants to make adjusting the maze parameters easier.
const int SIZE = DIMENSION * DIMENSION;
const float Z_COORD_GROUND = 0.f;
const float Z_COORD_WALL = 0.f;
const float Z_COORD_GOAL = 200.f;
const float WALL_BLOCK_SIZE = 400.f;
const float WALL_OFFSET = 200.f;

UCLASS()
class SCARYMAZE_API AMaze : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMaze();

	// Returns the index of the starting position in the MazeWalls array.
	UFUNCTION()
		int GetStartIndex();

	// Returns the index of the Goal in the MazeWalls array.
	UFUNCTION()
		int GetGoalIndex();

	// Returns the MazeWalls array.
	UFUNCTION()
		TArray<AWall*> GetMazeWalls();

	// Returns the MazePath array.
	UFUNCTION()
		TArray<int> GetMazePath();

	// This function is turned off.
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Allows mesh to be chosen in Unreal Editor to apply to Wall.
	UPROPERTY(EditAnywhere, Category = "Wall")
		TSubclassOf<AWall> Wall;

	// Allows mesh to be chosen in Unreal Editor to apply to Ground.
	UPROPERTY(EditAnywhere, Category = "Ground")
		TSubclassOf<AGround> Ground;

	// Allows mesh to be chosen in Unreal Editor to apply to Goal.
	UPROPERTY(EditAnywhere, Category = "Goal")
		TSubclassOf<AGoal> Goal;

	// The array that contains wall objects. The "Maze".
	UPROPERTY(EditAnywhere)
		TArray<AWall*> MazeWalls;

	// The array that contains the indices of areas that have been visited and are thus the 'path' of the maze.
	// They are in the order that the maze was constructed, beginning from MazeStart, but does not finish at
	// MazeGoal.
	UPROPERTY()
		TArray<int> MazePath;

	// The index where the player start in the MazeWalls array.
	int StartIndex;
	// The index where the goal is in the MazeWalls array.
	int GoalIndex;

	// Makes the ground.
	UFUNCTION()
		void GenerateGround();

	// Makes the maze, includeing both the MazeWalls and MazePath arrays.
	UFUNCTION()
		void CreateMaze();

	// Fills the area with walls to be removed as the maze is constructed.
	UFUNCTION()
		void InitializeMaze();

	// The loop that finds valid walls to remove in order to construct the maze and backtracks when none
	// can be found.
	UFUNCTION()
		void MazeConstructorLoop();

	// Checks if a potential cell is on the boundary or outside the boundary of the maze.
	UFUNCTION()
		bool IsOnOrOutOfBounds(int Cell);

	// Randomly choose a start position from the first column inside the maze.
	UFUNCTION()
		int SelectStart();

	// Get the next valid index to move to while constructing the maze paths.
	UFUNCTION()
		int GetNextIndex(int CurrentIndex);

	// Check if a potential cell is in bounds and has not been visited. If so, it
	// is valid.
	UFUNCTION()
		bool IsValidIndex(int PotentialIndex);

	// Turns off collision and hides mesh of walls that are to be 'removed'.
	UFUNCTION()
		void RemoveWalls();

	// Randomly select a position for the goal in the last column of the maze.
	UFUNCTION()
		void SelectGoal();

	// Spawns Wall at location.
	UFUNCTION()
		AWall* SpawnWall(FVector Location);

	// Spawns Floor at location.
	UFUNCTION()
		AGround* SpawnGround(FVector Location);

	// Spawns Goal at location.
	UFUNCTION()
		AGoal* SpawnGoal(FVector Location);
};