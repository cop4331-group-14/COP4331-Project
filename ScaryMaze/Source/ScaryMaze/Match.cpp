// Fill out your copyright notice in the Description page of Project Settings.

#include "Match.h"

// Sets default values
AMatch::AMatch()
{
	// Mesh was scaled when FBX file was imported.


	// Set the color and brightness of Match.
	LightEmission->SetLightBrightness(1000000.f);
	LightEmission->SetLightColor(FLinearColor::Red);
}