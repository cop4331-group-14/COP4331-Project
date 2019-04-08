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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Weapon)
	class USkeletalMeshComponent* Weapon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Skeleton)
	class USkeleton* Skeleton;

	UPROPERTY(EditAnywhere)
		UPointLightComponent* LightSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere)
		float LightTime;

	UFUNCTION()
		void SetLightTime(float Time);

	FTimerHandle LightTimerHandle;

	UFUNCTION()
		void OnLightTimeRunsOut();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	int AttackPower;

	UFUNCTION(BlueprintCallable)
		int GetAttackPower();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
	int Defense;

	UFUNCTION(BlueprintCallable)
		int GetDefense();

	UPROPERTY(EditAnywhere)
	int Score = 0;

	UFUNCTION(BlueprintCallable)
		int GetScore();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Base Character")
	bool IsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	UFUNCTION()
	virtual void CalculateDead();

	UFUNCTION()
	virtual void ValidateHealth();
	
	UFUNCTION()
	virtual void ValidateAttackPower();

	UFUNCTION()
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

	void Swing();

	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookUp(float Value);
	void LookRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
