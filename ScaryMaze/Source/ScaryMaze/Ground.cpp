// Fill out your copyright notice in the Description page of Project Settings.

#include "Ground.h"

// Constructor. Ground has no properties other than it's mesh.
AGround::AGround()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Applies the mesh to Ground.
	GroundMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GroundMeshComponent"));
	RootComponent = GroundMesh;
}