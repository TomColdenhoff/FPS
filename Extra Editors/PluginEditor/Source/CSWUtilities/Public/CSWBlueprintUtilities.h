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
	UFUNCTION(BlueprintPure, Category = "CSW|Utilities::BlueprintLibary", meta = (DisplayName = "CSW::Get All Actors With Component", WorldContext = "WorldContextObject", ))
	static void GetAllActorsWithComponent(const UObject* World, const TSubclassOf<UActorComponent> Component, TArray<UActorComponent*>& OutActorComponents);

	
	
};
