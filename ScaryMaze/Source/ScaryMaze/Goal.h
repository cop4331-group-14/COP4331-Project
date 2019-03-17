// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Goal.generated.h"

UCLASS()
class UNREAL_PRACTICE_API AGoal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGoal();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The mesh for the goal.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MazeGoal;

	// A pointlight for the goal to project.
	UPROPERTY(EditAnywhere)
		UPointLightComponent* GoalLight;
};
