// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "LightItem.generated.h"

UCLASS()
class SCARYMAZE_API ALightItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The mesh for the Light.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* LightMesh;

	// A pointlight for the goal to project.
	UPROPERTY(EditAnywhere)
		UPointLightComponent* LightEmission;


	

};
