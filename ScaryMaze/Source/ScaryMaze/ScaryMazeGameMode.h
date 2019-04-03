// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Maze.h"
#include "Wall.h"
#include "ScaryMazeHUD.h"
#include "ScaryMazeBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Match.h"
#include "Lighter.h"
#include "Engine/Engine.h"
#include "GameFramework/GameModeBase.h"
#include "ScaryMazeGameMode.generated.h"

UCLASS(minimalapi)
class AScaryMazeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AScaryMazeGameMode();

	int Level;

protected:
	virtual void BeginPlay() override;

private:
	// Used to spawn maze object.
	UPROPERTY(EditAnywhere)
		TSubclassOf<AMaze> CurrentMaze;

	// Stores reference to spawned maze.
	UPROPERTY()
		AMaze* ScaryMaze;

	UFUNCTION()
		void SpawnScaryMaze();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AMatch> Match;

	UFUNCTION()
		void SpawnMatches();

	UPROPERTY(EditAnywhere)
		TSubclassOf<ALighter> Lighter;

	UPROPERTY(EditAnywhere)
		AScaryMazeBaseCharacter* Player;

	UFUNCTION()
		AScaryMazeBaseCharacter* SpawnPlayer();

	UFUNCTION()
		void MoveControllerToPlayer();
};



