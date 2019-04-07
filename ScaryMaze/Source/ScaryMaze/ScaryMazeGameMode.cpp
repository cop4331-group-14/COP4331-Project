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

	// Assign the lighter blueprint to Lighter.
	static ConstructorHelpers::FClassFinder<ALighter> LighterBP(TEXT("Blueprint'/Game/Assets/Lights/Lighters/Blueprints/BP_Lighter'"));
	Lighter = (LighterBP.Class != nullptr) ? LighterBP.Class : ALighter::StaticClass();

	// Assign the lantern blueprint to Lantern.
	static ConstructorHelpers::FClassFinder<ALantern> LanternBP(TEXT("Blueprint'/Game/Assets/Lights/Lanterns/Blueprints/BP_Lantern'"));
	Lantern = (LanternBP.Class != nullptr) ? LanternBP.Class : ALantern::StaticClass();

	// Assign PlayerToSpawn to MyScaryMazeMain
	static ConstructorHelpers::FClassFinder<AScaryMazeBaseCharacter> PlayerToSpawnBP(TEXT("Blueprint'/Game/Blueprints/MyScaryMazeMainCharacter'"));
	PlayerToSpawn = PlayerToSpawnBP.Class;

	// Assign the breastplate blueprint to Breastplate.
	static ConstructorHelpers::FClassFinder<ABreastplate> BreastplateBP(TEXT("Blueprint'/Game/Assets/Armor/Breastplate/Blueprints/BP_Breastplate'"));
	Breastplate = (BreastplateBP.Class != nullptr) ? BreastplateBP.Class : ABreastplate::StaticClass();

	// Assign the greaves blueprint to Greaves.
	static ConstructorHelpers::FClassFinder<AGreaves> GreavesBP(TEXT("Blueprint'/Game/Assets/Armor/Greaves/Blueprints/BP_Greaves'"));
	Greaves = (GreavesBP.Class != nullptr) ? GreavesBP.Class : AGreaves::StaticClass();

	// Assign the helmet blueprint to Helmet.
	static ConstructorHelpers::FClassFinder<AHelmet> HelmetBP(TEXT("Blueprint'/Game/Assets/Armor/Helmet/Blueprints/BP_Helmet'"));
	Helmet = (HelmetBP.Class != nullptr) ? HelmetBP.Class : AHelmet::StaticClass();
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
	SpawnLightItems();
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

void AScaryMazeGameMode::SpawnLightItems()
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
			// Spawn light items at determined intervals.
			// Lanterns. Can't spawn at start or where armor spawns.
			if ((CurrentCell != 0 && CurrentCell % (3 * 120) == 0) && CurrentCell != PathLength / 2)
			{
				SpawnLantern(CurrentCell);
			}
			// Lighters. Can't spawn at start, where lanterns spawn, or where armor spawns.
			if (((CurrentCell != 0 && CurrentCell % (2 * 30) == 0) && CurrentCell % 360 != 0) && CurrentCell != PathLength / 2)
			{
				SpawnLighter(CurrentCell);
			}
			// Matches. Can't spawn at start, where lighters or lanterns spawn, or where armor spawns.
			if (((CurrentCell % (2 * 10) == 1) && CurrentCell % 60 != 0) && CurrentCell != PathLength / 2)
			{
				SpawnMatch(CurrentCell);
			}
		}
	}
}

void AScaryMazeGameMode::SpawnMatch(int CurrentCell)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[CurrentCell]->GetActorLocation();

	// Fine tune the location by lowering the z value so that the match sits on the ground.
	Location.Z = 75.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<AMatch>(Match, Location, FRotator::ZeroRotator, SpawnParams);
}

void AScaryMazeGameMode::SpawnLighter(int CurrentCell)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[CurrentCell]->GetActorLocation();
	Location.Z = 0.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<ALighter>(Lighter, Location, FRotator::ZeroRotator, SpawnParams);
}

void AScaryMazeGameMode::SpawnLantern(int CurrentCell)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[CurrentCell]->GetActorLocation();
	Location.Z = 0.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<ALantern>(Lantern, Location, FRotator::ZeroRotator, SpawnParams);
}

void AScaryMazeGameMode::SpawnArmorItem()
{
	const UWorld* World = GetWorld();

	if (World)
	{
		// Max length
		int PathLength = ScaryMaze->GetMazePath().Num();

		// Spawn armor based on game level.
		switch (Level)
		{
		case 2:
			SpawnGreaves(PathLength);
			break;
		case 5:
			SpawnHelmet(PathLength);
			break;
		case 9:
			SpawnBreastplate(PathLength);
			break;
		default:
			break;
		}
	}
}

void AScaryMazeGameMode::SpawnBreastplate(int PathLength)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[PathLength / 2]->GetActorLocation();
	Location.Z = 0.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<ABreastplate>(Breastplate, Location, FRotator::ZeroRotator, SpawnParams);
}

void AScaryMazeGameMode::SpawnGreaves(int PathLength)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[PathLength / 2]->GetActorLocation();
	Location.Z = 0.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<AGreaves>(Greaves, Location, FRotator::ZeroRotator, SpawnParams);
}

void AScaryMazeGameMode::SpawnHelmet(int PathLength)
{
	// Spawn Location
	FVector Location = (ScaryMaze->GetMazePath())[PathLength / 2]->GetActorLocation();
	Location.Z = 0.f;

	// Spawn Parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	GetWorld()->SpawnActor<AHelmet>(Helmet, Location, FRotator::ZeroRotator, SpawnParams);
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