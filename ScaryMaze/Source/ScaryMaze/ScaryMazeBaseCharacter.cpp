// Fill out your copyright notice in the Description page of Project Settings.

#include "ScaryMazeBaseCharacter.h"

// Sets default values
AScaryMazeBaseCharacter::AScaryMazeBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScaryMazeBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScaryMazeBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AScaryMazeBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AScaryMazeBaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AScaryMazeBaseCharacter::MoveRight);
	//PlayerInputComponent->BindAxis("LookUp", this, &AScaryMazeBaseCharacter::LookUp);
	//PlayerInputComponent->BindAxis("LookRight", this, &AScaryMazeBaseCharacter::LookRight);

}
void AScaryMazeBaseCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void AScaryMazeBaseCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);

}
/*
void AScaryMazeBaseCharacter::LookUp(float Value)
{
	MouseInput.X += Value;
}

void AScaryMazeBaseCharacter::LookRight(float Value)
{

}
*/
void AScaryMazeBaseCharacter::CalculateHealth(float DeltaHealth)
{
	Health += DeltaHealth;
	CalculateDead();
}

void AScaryMazeBaseCharacter::CalculateAttackPower(float DeltaAttackPower)
{
	AttackPower += DeltaAttackPower;
	ValidateAttackPower();
}

void AScaryMazeBaseCharacter::CalculateDefense(float DeltaDefense)
{
	Defense += DeltaDefense;
	ValidateDefense();
}

void AScaryMazeBaseCharacter::CalculateDead()
{
	if (Health <= 0.0)
	{
		IsDead = true;
	}
	else
	{
		IsDead = false;
	}
}

void AScaryMazeBaseCharacter::ValidateAttackPower()
{
	if (AttackPower < 1)
	{
		AttackPower = 1;
	}
}

void AScaryMazeBaseCharacter::ValidateDefense()
{
	if (Defense < 1)
	{
		Defense = 1;
	}
}

#if WITH_EDITOR

void AScaryMazeBaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	IsDead = false;
	Health = 100.0;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}

#endif


