// Fill out your copyright notice in the Description page of Project Settings.

#include "Goal.h"
#include "ScaryMazeGameMode.h"
#include "ScaryMazeBaseCharacter.h"
#include "Engine.h"

// Sets default values
AGoal::AGoal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the GoalRoot as the root component.
	GoalRoot = CreateDefaultSubobject<USceneComponent>(TEXT("GoalRoot"));
	RootComponent = GoalRoot;

	// Attach the mesh component.
	GoalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GoalMesh"));
	GoalMesh->SetupAttachment(RootComponent);

	// Set GoalLight color and intensity and attach component.
	GoalLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightEmission"));
	// Set the default color and brightness.
	GoalLight->SetIntensity(100000.f);
	GoalLight->SetLightColor(FLinearColor::Blue);
	GoalLight->SetupAttachment(RootComponent);

	// Set the GoalBox.
	GoalBox = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalOverlapBox"));
	GoalBox->SetGenerateOverlapEvents(true);
	GoalBox->SetWorldScale3D(FVector(8.f, 8.f, 8.f));
	GoalBox->OnComponentBeginOverlap.AddDynamic(this, &AGoal::OnPlayerEnterGoalBox);
	GoalBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGoal::BeginPlay()
{
	Super::BeginPlay();

}

void AGoal::OnPlayerEnterGoalBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor && (OtherActor != this) && (OtherActor->GetClass()->IsChildOf(AScaryMazeBaseCharacter::StaticClass())))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Goal!!"));

		UScaryMazeGameInstance* Instance = Cast<UScaryMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
		if (Instance)
		{
			Instance->Level++;
		}

		UGameplayStatics::OpenLevel(GetWorld(), FName("LevelOne"), false);
	}
}

// Called every frame
void AGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


