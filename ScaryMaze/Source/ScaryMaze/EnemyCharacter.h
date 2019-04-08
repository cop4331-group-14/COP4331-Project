// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class SCARYMAZE_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UPROPERTY(EditAnywhere, Category = Behavior)
	class UBehaviorTree *BotBehavior;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh1P;


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


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
