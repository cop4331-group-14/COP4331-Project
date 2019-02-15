// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScaryMazeGameMode.h"
#include "ScaryMazeHUD.h"
#include "ScaryMazeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScaryMazeGameMode::AScaryMazeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScaryMazeHUD::StaticClass();
}
