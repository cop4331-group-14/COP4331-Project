// Fill out your copyright notice in the Description page of Project Settings.

#include "Wall.h"

// Constructor defaults isBoundary and isVisited to false.
AWall::AWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Applies the mesh to Wall.
	WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMeshComponent"));
	RootComponent = WallMesh;

	SetIsBoundary(false);
	SetIsVisited(false);
}

// Getters and Setters.
void AWall::SetIsVisited(bool Visited)
{
	this->bIsVisited = Visited;
}

bool AWall::GetIsVisited()
{
	return this->bIsVisited;
}

void AWall::SetIsBoundary(bool bBoundary)
{
	this->bIsBoundary = bBoundary;
}

bool AWall::GetIsBoundary()
{
	return this->bIsBoundary;
}