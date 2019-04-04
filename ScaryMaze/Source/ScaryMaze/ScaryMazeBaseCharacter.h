// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "ScaryMazeBaseCharacter.generated.h"

UCLASS(Blueprintable)
class SCARYMAZE_API AScaryMazeBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	int AttackPower;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	int Defense;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Base Character")
	bool IsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;


	virtual void CalculateDead();

	virtual void ValidateHealth();
	
	virtual void ValidateAttackPower();

	virtual void ValidateDefense();


	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float DeltaHealth);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateAttackPower(float DeltaAttackPower);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateDefense(float DeltaDefense);

	UPROPERTY(EditAnywhere)
		UPointLightComponent* LightSource;

	UPROPERTY(EditAnywhere)
		float LightTime;


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
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);


};
