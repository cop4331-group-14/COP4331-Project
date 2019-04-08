// Fill out your copyright notice in the Description page of Project Settings.

#include "Lantern.h"

ALantern::ALantern()
{
	LightIntensity = 25000.f;
	LightColor = FColor::White;
	LightTime = 120.f;
	Attenuation = 5000.f;
	Points = 5;
}