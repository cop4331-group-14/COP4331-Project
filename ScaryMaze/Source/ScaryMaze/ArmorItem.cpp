// Fill out your copyright notice in the Description page of Project Settings.

#include "ArmorItem.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "ScaryMazeBaseCharacter.h"
#include "Breastplate.h"
#include "Greaves.h"
#include "Helmet.h"

// Sets default values
AArmorItem::AArmorItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Set the ArmorRoot as the root component.
	ArmorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ArmorRoot"));
	RootComponent = ArmorRoot;

	// Set the mesh as the root component.
	ArmorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmorMesh"));
	ArmorMesh->SetupAttachment(RootComponent);

	// Set the ArmorBox.
	ArmorBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ArmorPickupBox"));
	ArmorBox->SetGenerateOverlapEvents(true);
	ArmorBox->SetWorldScale3D(FVector(1.f, 1.f, 1.f));
	ArmorBox->OnComponentBeginOverlap.AddDynamic(this, &AArmorItem::OnPlayerEnterLightBox);
	ArmorBox->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AArmorItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AArmorItem::OnPlayerEnterLightBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// If the player enters the ArmorBox
	if (OtherActor && (OtherActor != this) && (OtherActor->GetClass()->IsChildOf(AScaryMazeBaseCharacter::StaticClass())))
	{
		AScaryMazeBaseCharacter* Player = Cast<AScaryMazeBaseCharacter>(OtherActor);

		// Add armor to the player.
		Player->Defense += this->Defense;

		// Add points.
		Player->Score += this->Points;

		// Display the collection message.
		DisplayArmorCollectionMessage();

		// Get rid of the armor from the world.
		Destroy();
	}
}

void AArmorItem::DisplayArmorCollectionMessage()
{
	FString ArmorSource;

	if (this->GetClass()->IsChildOf(ABreastplate::StaticClass()))
	{
		ArmorSource = "breastplate";
	}
	else if (this->GetClass()->IsChildOf(AGreaves::StaticClass()))
	{
		ArmorSource = "set of greaves";
	}
	else if (this->GetClass()->IsChildOf(AHelmet::StaticClass()))
	{
		ArmorSource = "helmet";
	}
	else
	{
		ArmorSource = "piece of armor";
	}
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("You collected a " + ArmorSource + "."));
}

// Called every frame
void AArmorItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

