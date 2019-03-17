// Fill out your copyright notice in the Description page of Project Settings.

#include "Goal.h"

// Sets default values
AGoal::AGoal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the mesh as the root component.
	MazeGoal = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GoalMesh"));
	RootComponent = MazeGoal;
	// Scale the mesh.
	MazeGoal->SetWorldScale3D(FVector(4.f, 4.f, 6.f));

	// Set the GoalLight to be attached to the goal.
	GoalLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Goal Light"));
	GoalLight->SetLightBrightness(1000000.f);
	GoalLight->SetLightColor(FLinearColor::Blue);

	GoalLight->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGoal::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


