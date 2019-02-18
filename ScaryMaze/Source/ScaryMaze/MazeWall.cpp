// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeWall.h"

// Sets default values
AMazeWall::AMazeWall()
{
	SM_MazeWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));


}

// Called when the game starts or when spawned
void AMazeWall::BeginPlay()
{
	Super::BeginPlay();
	
}



