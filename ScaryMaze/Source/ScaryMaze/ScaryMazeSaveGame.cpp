// Fill out your copyright notice in the Description page of Project Settings.

#include "ScaryMazeSaveGame.h"
#include "ScaryMaze.h"

UScaryMazeSaveGame::UScaryMazeSaveGame()
{
	SaveName = TEXT("TestSaveSlot");
	Health = 100.0;
	AttackPower = 1;
	Defense = 1;
	IsDead = false;
}