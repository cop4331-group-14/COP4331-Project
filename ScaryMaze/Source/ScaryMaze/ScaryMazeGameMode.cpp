// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ScaryMazeGameMode.h"


AScaryMazeGameMode::AScaryMazeGameMode()
	: Super()
{
	// set default pawn class to our character class
	DefaultPawnClass = AScaryMazeBaseCharacter::StaticClass();
	
	// use our custom HUD class
	HUDClass = AScaryMazeHUD::StaticClass();

	// Assign the Maze blueprint to ScaryMaze
	static ConstructorHelpers::FObjectFinder<UClass> BP_Maze(TEXT("Blueprint'/Game/Blueprints/BP_Maze.BP_Maze_C'"));
	CurrentMaze = (BP_Maze.Object != nullptr) ? BP_Maze.Object : AMaze::StaticClass();

	// Assign the match blueprint to Match.
	static ConstructorHelpers::FClassFinder<AMatch> MatchBP(TEXT("Blueprint'/Game/Assets/Lights/Matches/Blueprints/BP_Match'"));
	Match = (MatchBP.Class != nullptr) ? MatchBP.Class : AMatch::StaticClass();

	// Assign PlayerToSpawn to MyScaryMazeMain
	static ConstructorHelpers::FClassFinder<AScaryMazeBaseCharacter> PlayerToSpawnBP(TEXT("Blueprint'/Game/Blueprints/MyScaryMazeMainCharacter'"));
	PlayerToSpawn = PlayerToSpawnBP.Class;



}

void AScaryMazeGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the ScaryMaze
	SpawnScaryMaze();


	// Make the Game Mode Level match the Level in Game Instance and get the Game Instance Player stats;
	UScaryMazeGameInstance* Instance = Cast<UScaryMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (Instance)
	{
		this->Level = Instance->Level;
	}

	// Display the current Level
	FString currentLevel = FString::FromInt(this->Level);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT(" Level: " + currentLevel));

	// Spawn the player and assign it to this player and the GameInstance player.
	this->Player = SpawnPlayer();


	// Change default controller to work on the spawned player.
	MoveControllerToPlayer();

	FString currentHealth = FString::FromInt(this->Player->Health);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT(" Health: " + currentHealth));

	// Spawn the matches
	SpawnMatches();
}

void AScaryMazeGameMode::SpawnScaryMaze()
{
	// Get reference to World.
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Location
		FVector Location = FVector::ZeroVector;

		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;

		// Spawn the maze and save a reference.
		ScaryMaze = GetWorld()->SpawnActor<AMaze>(CurrentMaze, Location, FRotator::ZeroRotator, SpawnParams);
	}
}

void AScaryMazeGameMode::SpawnMatches()
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Max length
		int PathLength = ScaryMaze->GetMazePath().Num();

		// Loop through all the cells of the path of the maze and spawn matches at determined
		// intervals.
		for (int CurrentCell = 0; CurrentCell < PathLength; CurrentCell++)
		{
			// Only spawn if we are at the determined interval.
			if (CurrentCell % ScaryMaze->Dimension == (ScaryMaze->Dimension / 2) || CurrentCell % ScaryMaze->Dimension == (ScaryMaze->Dimension - 1))
			{
				// Spawn Location
				FVector Location = (ScaryMaze->GetMazePath())[CurrentCell]->GetActorLocation();

				// Fine tune the location by lowering the z value so that the match sits on the ground.
				Location.Z = 75.f;

				// Spawn Parameters
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				GetWorld()->SpawnActor<AMatch>(Match, Location, FRotator::ZeroRotator, SpawnParams);
			}
		}
	}
}

AScaryMazeBaseCharacter* AScaryMazeGameMode::SpawnPlayer()
{
	UScaryMazeGameInstance* Instance = Cast<UScaryMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	// Spawn Location
	FVector Location = ScaryMaze->GetMazePath()[0]->GetActorLocation();
	Location.Z = 100.f;


	// Get reference to World.
	const UWorld* World = GetWorld();

	if (World)
	{
		// Spawn Parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		// Spawn the player.
		AScaryMazeBaseCharacter* SpawnedPlayer = GetWorld()->SpawnActor<AScaryMazeBaseCharacter>(PlayerToSpawn, Location, FRotator::ZeroRotator, SpawnParams);
		
		SpawnedPlayer->Health = Instance->Health;
		SpawnedPlayer->AttackPower = Instance->AttackPower;
		SpawnedPlayer->Defense = Instance->Defense;

		return SpawnedPlayer;
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("World was null!"));
		return nullptr;
	}

}

void AScaryMazeGameMode::MoveControllerToPlayer()
{
	Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	Controller->Possess(Player);
}