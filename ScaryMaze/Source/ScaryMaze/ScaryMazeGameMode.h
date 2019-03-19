// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Maze.h"
#include "Wall.h"
#include "GameFramework/GameModeBase.h"
#include "ScaryMazeGameMode.generated.h"

UCLASS(minimalapi)
class AScaryMazeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AScaryMazeGameMode();

protected:
	virtual void BeginPlay() override;

private:
	// Used to spawn maze object.
	UPROPERTY(EditAnywhere)
		TSubclassOf<AMaze> CurrentMaze;

	// Stores reference to spawned maze.
	UPROPERTY()
		AMaze* ScaryMaze;

	// Stores array of path through the maze.
	UPROPERTY()
		TArray<AWall*> ScaryMazePath;

	// Spawns the maze.
	UFUNCTION()
		void SpawnScaryMaze();
};



