// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckForPlayer.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackBoard/BlackboardKeyAllTypes.h"
#include "ScaryMazeBaseCharacter.h"
#include "EngineGlobals.h"
#include "Engine.h"
#include "EnemyAI.h"

UBTService_CheckForPlayer::UBTService_CheckForPlayer()
{
	bCreateNodeInstance = true;
}

void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AEnemyAI *EnemyPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());

	if (EnemyPC)
	{
		UWorld *World = GetWorld();
		if (World)
		{
			APlayerController *Control = World->GetFirstPlayerController();
			if (Control)
			{
				AScaryMazeBaseCharacter *Enemy = Cast<AScaryMazeBaseCharacter>(Control->GetPawn());

				if (Enemy)
				{
					OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->EnemyKeyID, Enemy);
					//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "ENEMY IS HERE");
				}
			}
		}
	}
}