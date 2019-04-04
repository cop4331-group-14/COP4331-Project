// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
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
	int Level = 10;

	// The current player.
	AScaryMazeBaseCharacter* Player = nullptr;
		
	
};
