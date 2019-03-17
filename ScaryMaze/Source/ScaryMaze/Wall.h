// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Wall.generated.h"

/**
 *
 */
UCLASS()
class SCARYMAZE_API AWall : public AActor
{
	GENERATED_BODY()

public:
	AWall();

	UFUNCTION()
		void SetIsVisited(bool bVisited);

	UFUNCTION()
		bool GetIsVisited();

	UFUNCTION()
		void SetIsBoundary(bool bBoundary);

	UFUNCTION()
		bool GetIsBoundary();

private:
	// Allows wall's mesh to be edited.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* WallMesh;

	// Tells whether a wall instance has been visited when creating the maze.
	bool bIsVisited;
	// Tells whether a wall instance is on the boundary of the maze.
	bool bIsBoundary;
};