// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ScaryMazeGameInstance.h"
#include "Components/PointLightComponent.h"
#include "Goal.generated.h"

UCLASS()
class SCARYMAZE_API AGoal : public AActor
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

	// Scene Component of the Goal as root.
	UPROPERTY(EditAnywhere)
		USceneComponent* GoalRoot;

	// The mesh for the goal.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* GoalMesh;

	// A pointlight for the goal to project.
	UPROPERTY(EditAnywhere)
		UPointLightComponent* GoalLight;

	// Box collider.
	UPROPERTY(EditAnywhere)
		UBoxComponent* GoalBox;

	// Overlap function.
	UFUNCTION()
		void OnPlayerEnterGoalBox(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);
};
