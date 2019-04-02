// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScaryMazeGameMode.h"


AScaryMazeGameMode::AScaryMazeGameMode()
	: Super()
{
	// set default pawn class to our character class
	DefaultPawnClass = AScaryMazeBaseCharacter::StaticClass();
	
	// use our custom HUD class
	HUDClass = AScaryMazeHUD::StaticClass();

	// Assign the Maze blueprint to ScaryMaze
	static ConstructorHelpers::FObjectFinder<UClass> BP_Maze(TEXT("Blueprint'/Game/Blueprints/BP_Maze.BP_Maze_C'"));
	CurrentMaze = (BP_Maze.Object != nullptr) ? BP_Maze.Object : AMaze::StaticClass();

	// Assign the match blueprint to Match.
	static ConstructorHelpers::FClassFinder<AMatch> MatchBP(TEXT("Blueprint'/Game/Assets/Lights/Matches/Blueprints/BP_Match'"));
	Match = (MatchBP.Class != nullptr) ? MatchBP.Class : AMatch::StaticClass();
}

void AScaryMazeGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the ScaryMaze
	SpawnScaryMaze();

	// Spawn the player.
	Player = SpawnPlayer();
	// Change default controller to work on the spawned player.
	MoveControllerToPlayer();

	// Spawn the matches
	SpawnMatches();
}

void AScaryMazeGameMode::SpawnScaryMaze()
{
	// Get reference to World.
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Location
		FVector Location = FVector::ZeroVector;

		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;

		// Spawn the maze and save a reference.
		ScaryMaze = GetWorld()->SpawnActor<AMaze>(CurrentMaze, Location, FRotator::ZeroRotator, SpawnParams);
	}
}

void AScaryMazeGameMode::SpawnMatches()
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Max length
		int PathLength = ScaryMaze->GetMazePath().Num();

		// Loop through all the cells of the path of the maze and spawn matches at determined
		// intervals.
		for (int CurrentCell = 0; CurrentCell < PathLength; CurrentCell++)
		{
			// Only spawn if we are at the determined interval.
			if (CurrentCell % DIMENSION == (DIMENSION / 2) || CurrentCell % DIMENSION == (DIMENSION - 1))
			{
				// Spawn Location
				FVector Location = (ScaryMaze->GetMazePath())[CurrentCell]->GetActorLocation();

				// Fine tune the location by lowering the z value so that the match sits on the ground.
				Location.Z = 75.f;

				// Spawn Parameters
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				GetWorld()->SpawnActor<AMatch>(Match, Location, FRotator::ZeroRotator, SpawnParams);
			}
		}
	}
}

AScaryMazeBaseCharacter* AScaryMazeGameMode::SpawnPlayer()
{
	// Get reference to World.
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Location
		FVector Location = ScaryMaze->GetMazePath()[0]->GetActorLocation();
		Location.Z = 100.f;

		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		//SpawnParams.Instigator = Instigator;

		// Spawn the player.
		return GetWorld()->SpawnActor<AScaryMazeBaseCharacter>(AScaryMazeBaseCharacter::StaticClass(), Location, FRotator::ZeroRotator, SpawnParams);
	}
	else
	{
		return nullptr;
	}
}

void AScaryMazeGameMode::MoveControllerToPlayer()
{
	// Cache a reference to the default controller.
	APlayerController* Controller = GetWorld()->GetFirstPlayerController();

	// Posses the player with the controller.
	Controller->Possess(Player);
}