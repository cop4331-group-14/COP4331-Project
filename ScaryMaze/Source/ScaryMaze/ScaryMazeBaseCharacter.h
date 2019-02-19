// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ScaryMazeBaseCharacter.generated.h"

UCLASS(Blueprintable)
class SCARYMAZE_API AScaryMazeBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Health = 100.0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		int AttackPower = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		int Defense = 1;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Base Character")
		bool IsDead = false;

	virtual void CalculateDead();
	
	virtual void ValidateAttackPower();

	virtual void ValidateDefense();

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float DeltaHealth);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateAttackPower(float DeltaAttackPower);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateDefense(float DeltaDefense);


#if WITH_EDITOR

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif


public:
	// Sets default values for this character's properties
	AScaryMazeBaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookUp(float Value);
	void LookRight(float Value);

};
