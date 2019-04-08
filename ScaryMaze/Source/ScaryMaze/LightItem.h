// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
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

	// Scene component of Light.
	UPROPERTY(EditAnywhere)
		USceneComponent* LightRoot;

	// The mesh for the Light.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* LightMesh;

	UPROPERTY(EditAnywhere)
		float LightIntensity;

	UPROPERTY(EditAnywhere)
		float LightTime;

	UPROPERTY(EditAnywhere)
		FColor LightColor;

	UPROPERTY(EditAnywhere)
		float Attenuation;

	UPROPERTY(EditAnywhere)
		int Points;

	// Collider for Light.
	UPROPERTY(EditAnywhere)
		UBoxComponent* LightBox;

	// Overlap function.
	UFUNCTION()
		void OnPlayerEnterLightBox(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

	// Display a default message when a light scource is walked over.
	UFUNCTION()
		void DisplayLightCollectionMessage();


	

};
