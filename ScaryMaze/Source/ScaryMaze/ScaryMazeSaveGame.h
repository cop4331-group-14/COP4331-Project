// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ScaryMazeSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class SCARYMAZE_API UScaryMazeSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString SaveName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float Health;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int AttackPower;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int Defense;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		int Level;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		int Score;

	UScaryMazeSaveGame();
};
