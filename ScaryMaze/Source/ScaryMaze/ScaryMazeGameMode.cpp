// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScaryMazeGameMode.h"
#include "ScaryMazeHUD.h"
#include "ScaryMazeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScaryMazeGameMode::AScaryMazeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScaryMazeHUD::StaticClass();

	// Assign the Maze blueprint to ScaryMaze
	static ConstructorHelpers::FObjectFinder<UClass> BP_Maze(TEXT("Blueprint'/Game/Blueprints/BP_Maze.BP_Maze_C'"));
	CurrentMaze = (BP_Maze.Object != nullptr) ? BP_Maze.Object : AMaze::StaticClass();
}

void AScaryMazeGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the ScaryMaze
	SpawnScaryMaze();
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
