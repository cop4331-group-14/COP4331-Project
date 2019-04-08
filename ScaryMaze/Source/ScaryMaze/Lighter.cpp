// Fill out your copyright notice in the Description page of Project Settings.

#include "Lighter.h"

ALighter::ALighter()
{
	LightIntensity = 8000.f;
	LightColor = FColor::Orange;
	LightTime = 30.f;
	Attenuation = 2400.f;
	Points = 3;
}
