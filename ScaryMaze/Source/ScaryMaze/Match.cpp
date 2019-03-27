// Fill out your copyright notice in the Description page of Project Settings.

#include "Match.h"

// Sets default values
AMatch::AMatch()
{
	// Set the light's relative position to appear at the match head.
	LightEmission->SetRelativeLocation(FVector(0.f, -80.f, 10.f));
}