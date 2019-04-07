// Fill out your copyright notice in the Description page of Project Settings.

#include "LightItem.h"

#include "ScaryMazeBaseCharacter.h"
//#include "ScaryMazeGameInstance.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
//#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Match.h"
#include "Lighter.h"
#include "Lantern.h"

// Sets default values
ALightItem::ALightItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Set the LightRoot as the root component.
	LightRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LightRoot"));
	RootComponent = LightRoot;

	// Set the mesh as the root component.
	LightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightMesh"));
	LightMesh->SetupAttachment(RootComponent);

	// Set the LightBox.
	LightBox = CreateDefaultSubobject<UBoxComponent>(TEXT("LightPickupBox"));
	LightBox->SetGenerateOverlapEvents(true);
	LightBox->SetWorldScale3D(FVector(1.f, 1.f, 1.f));
	LightBox->OnComponentBeginOverlap.AddDynamic(this, &ALightItem::OnPlayerEnterLightBox);
	LightBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ALightItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALightItem::OnPlayerEnterLightBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// If the player enters the LightBox
	if (OtherActor && (OtherActor != this) && (OtherActor->GetClass()->IsChildOf(AScaryMazeBaseCharacter::StaticClass())))
	{
		AScaryMazeBaseCharacter* Player = Cast<AScaryMazeBaseCharacter>(OtherActor);
		
		// Player can pick up light source only if they don't have a light source active.
		if (!GetWorldTimerManager().IsTimerActive(Player->LightTimerHandle))
		{
			// Set the light parameters
			Player->LightSource->SetIntensity(this->LightIntensity);
			Player->LightSource->SetLightColor(this->LightColor);
			Player->LightTime = this->LightTime;
			Player->LightSource->SetAttenuationRadius(this->Attenuation);

			// Start the player's light timer.
			Player->SetLightTime(this->LightTime);

			DisplayLightCollectionMessage();
			Destroy();
		}
	}
}

void ALightItem::DisplayLightCollectionMessage()
{
	FString LightSource;

	if (this->GetClass()->IsChildOf(AMatch::StaticClass()))
	{
		LightSource = "match";
	}
	else if (this->GetClass()->IsChildOf(ALighter::StaticClass()))
	{
		LightSource = "lighter";
	}
	else if (this->GetClass()->IsChildOf(ALantern::StaticClass()))
	{
		LightSource = "lantern";
	}
	else
	{
		LightSource = "light source";
	}
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("You collected a " + LightSource + "."));
}

// Called every frame
void ALightItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

