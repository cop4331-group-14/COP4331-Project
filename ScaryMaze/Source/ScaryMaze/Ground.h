// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Ground.generated.h"

/**
 *
 */
UCLASS()
class SCARYMAZE_API AGround : public AActor
{
	GENERATED_BODY()

public:
	AGround();

private:
	// Allows Ground's mesh to be edited.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* GroundMesh;
};