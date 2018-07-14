// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameData.h"
#include "GameDataLibary.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UGameDataLibary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
public:
	UGameDataLibary(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BLueprintPure, Category = "Game Data")
	static UGameData* GetGameData(bool& IsValid);


	
};
