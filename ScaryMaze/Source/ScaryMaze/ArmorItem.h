// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "ArmorItem.generated.h"

UCLASS()
class SCARYMAZE_API AArmorItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmorItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Scene component of Light.
	UPROPERTY(EditAnywhere)
		USceneComponent* ArmorRoot;

	// The mesh for the Light.
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ArmorMesh;

	UPROPERTY(EditAnywhere)
		int Defense;

	// Collider for Light.
	UPROPERTY(EditAnywhere)
		UBoxComponent* ArmorBox;

	// Overlap function.
	UFUNCTION()
		void OnPlayerEnterLightBox(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

	// Display a default message when a light scource is walked over.
	UFUNCTION()
		void DisplayArmorCollectionMessage();

};
