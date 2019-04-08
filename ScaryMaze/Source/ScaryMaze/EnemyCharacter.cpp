// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyCharacter.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxHealth = 100.0;
	Health = MaxHealth;
	AttackPower = 1;
	Defense = 1;
	IsDead = false;

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::CalculateHealth(float DeltaHealth)
{
	Health += DeltaHealth;
	ValidateHealth();
}

// Function to change the characters attack power, and check if it is valid
void AEnemyCharacter::CalculateAttackPower(float DeltaAttackPower)
{
	AttackPower += DeltaAttackPower;
	ValidateAttackPower();
}

// Function to change the characters defense, and check if it is valid
void AEnemyCharacter::CalculateDefense(float DeltaDefense)
{
	Defense += DeltaDefense;
	ValidateDefense();
}

void AEnemyCharacter::CalculateDead()
{
	if (Health <= 0.0)
	{
		// Clear the light timer before dying.
		IsDead = true;
	}
	else
	{
		IsDead = false;
	}
}

void AEnemyCharacter::ValidateHealth()
{
	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}
	else
	{
		CalculateDead();
	}
}

void AEnemyCharacter::ValidateAttackPower()
{
	if (AttackPower < 1)
	{
		AttackPower = 1;
	}
}

void AEnemyCharacter::ValidateDefense()
{
	if (Defense < 1)
	{
		Defense = 1;
	}
}


#if WITH_EDITOR

void AEnemyCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	IsDead = false;
	Health = 100.0;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}

#endif
