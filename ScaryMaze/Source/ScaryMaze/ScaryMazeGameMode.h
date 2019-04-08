// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Maze.h"
#include "Wall.h"
#include "ScaryMazeHUD.h"
#include "ScaryMazeBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Match.h"
#include "Lighter.h"
#include "Lantern.h"
#include "Breastplate.h"
#include "Greaves.h"
#include "Helmet.h"
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

	UFUNCTION()
		void LoadGame();

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
		void SpawnLightItems();

	UFUNCTION()
		void SpawnMatch(int CurrentCell);

	UFUNCTION()
		void SpawnLighter(int CurrentCell);

	UFUNCTION()
		void SpawnLantern(int CurrentCell);

	UPROPERTY(EditAnywhere)
		TSubclassOf<ALighter> Lighter;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ALantern> Lantern;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABreastplate> Breastplate;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AGreaves> Greaves;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AHelmet> Helmet;

	UFUNCTION()
		void SpawnArmorItem();

	UFUNCTION()
		void SpawnBreastplate(int PathLength);

	UFUNCTION()
		void SpawnGreaves(int PathLength);

	UFUNCTION()
		void SpawnHelmet(int PathLength);

	UPROPERTY(EditAnywhere)
		TSubclassOf<AScaryMazeBaseCharacter> PlayerToSpawn;

	UPROPERTY(EditAnywhere)
		AScaryMazeBaseCharacter* Player;

	UPROPERTY(EditAnywhere)
		APlayerController* Controller;
	

	UFUNCTION()
		AScaryMazeBaseCharacter* SpawnPlayer(UScaryMazeGameInstance* Instance);

	UFUNCTION()
		void MoveControllerToPlayer();


};



