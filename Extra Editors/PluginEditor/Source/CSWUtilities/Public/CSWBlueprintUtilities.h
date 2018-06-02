// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CSWBlueprintUtilities.generated.h"

/**
 * 
 */
UCLASS()
class CSWUTILITIES_API UCSWBlueprintUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/*
	* Find all Actors in the world with the specified component
	* This is a slow operation, use with caution e.g. do not use every frame
	*/
	UFUNCTION(BlueprintPure, Category = "CSW|Utilities::BlueprintLibary", meta = (DisplayName = "CSW::Get All Actors With Component", WorldContext = "WorldContextObject", DeterminesOutputType = "Component", DynamicOutputParam = "OutActorComponents"))
	static void GetAllActorsWithComponent(const UObject* WorldContextObject, const TSubclassOf<UActorComponent> Component, TArray<AActor*>& OutActors, TArray<UActorComponent*>& OutActorComponents);

	
	
};
