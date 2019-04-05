// Fill out your copyright notice in the Description page of Project Settings.

#include "ScaryMazeBaseCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "MotionControllerComponent.h"

// Sets default values
AScaryMazeBaseCharacter::AScaryMazeBaseCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Stats of the character
	MaxHealth = 100.0;
	Health = 100.0;
	AttackPower = 1;
	Defense = 1;
	IsDead = false;
	// Turn speed of character
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;
	// Create camera for the character (1st-person view)
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	// Light to attach to character
	LightSource = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightSource"));
	LightSource->SetIntensity(0.f);
	LightSource->SetLightColor(FLinearColor::Red);
	LightSource->SetupAttachment(FirstPersonCameraComponent);


	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	Weapon->bCastDynamicShadow = false;
	Weapon->CastShadow = false;
	Weapon->SetupAttachment(RootComponent);

	/*
	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);
	*/

	Skeleton = CreateDefaultSubobject<USkeleton>(TEXT("Skeleton"));
}

// Called when the game starts or when spawned
void AScaryMazeBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Weapon->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

// Called every frame
void AScaryMazeBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScaryMazeBaseCharacter::Swing()
{

}

// Called to bind functionality to input
void AScaryMazeBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Binds functions to movement of character and camera
	PlayerInputComponent->BindAxis("MoveForward", this, &AScaryMazeBaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AScaryMazeBaseCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

void AScaryMazeBaseCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void AScaryMazeBaseCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);

}

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

// Function to change the characters health, and check if character is still alive
void AScaryMazeBaseCharacter::CalculateHealth(float DeltaHealth)
{
	Health += DeltaHealth;
	ValidateHealth();
}

// Function to change the characters attack power, and check if it is valid
void AScaryMazeBaseCharacter::CalculateAttackPower(float DeltaAttackPower)
{
	AttackPower += DeltaAttackPower;
	ValidateAttackPower();
}

// Function to change the characters defense, and check if it is valid
void AScaryMazeBaseCharacter::CalculateDefense(float DeltaDefense)
{
	Defense += DeltaDefense;
	ValidateDefense();
}

void AScaryMazeBaseCharacter::SetLightTime(float Time)
{
	GetWorld()->GetTimerManager().SetTimer(LightTimerHandle, this, &AScaryMazeBaseCharacter::OnLightTimeRunsOut, Time, false);
}

void AScaryMazeBaseCharacter::OnLightTimeRunsOut()
{
	this->LightSource->SetIntensity(0.f);
}

// Function to check if the character is still alive
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

void AScaryMazeBaseCharacter::ValidateHealth()
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

// Allows editing within the Unreal Editor
#if WITH_EDITOR

void AScaryMazeBaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	IsDead = false;
	Health = 100.0;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}

#endif


