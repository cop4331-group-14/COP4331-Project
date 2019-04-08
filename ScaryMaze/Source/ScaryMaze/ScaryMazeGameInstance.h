// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "ScaryMazeBaseCharacter.h"
#include "ScaryMazeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SCARYMAZE_API UScaryMazeGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// The level of the game
	int Level = 1;

	// The player's current health.
	float Health = 100.f;

	// The player's current attack power.
	int AttackPower = 1;

	// The player's current defense.
	int Defense = 1;

	UPROPERTY(EditAnywhere)
		bool bLoad = false;

	UFUNCTION(BlueprintCallable)
		void SetbLoad();
};
