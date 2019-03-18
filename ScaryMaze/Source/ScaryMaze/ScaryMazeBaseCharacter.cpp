// Fill out your copyright notice in the Description page of Project Settings.

#include "ScaryMazeBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

// Sets default values
AScaryMazeBaseCharacter::AScaryMazeBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Health = 100.0;
	AttackPower = 1;
	Defense = 1;
	IsDead = false;
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

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
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
//	PlayerInputComponent->BindAxis("TurnRate", this, &AScaryMazeBaseCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
//	PlayerInputComponent->BindAxis("LookUpRate", this, &AScaryMazeBaseCharacter::LookUpAtRate);

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
void AScaryMazeBaseCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AScaryMazeBaseCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

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


