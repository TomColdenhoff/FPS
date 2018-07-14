// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataLibary.h"
#include "Engine.h"

UGameDataLibary::UGameDataLibary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UGameData * UGameDataLibary::GetGameData(bool & IsValid)
{
	IsValid = false;
	UGameData* gameData = Cast<UGameData>(GEngine->GameSingleton);

	if (!gameData) return nullptr;
	if (!gameData->IsValidLowLevel()) return nullptr;

	IsValid = true;
	return gameData;
}
