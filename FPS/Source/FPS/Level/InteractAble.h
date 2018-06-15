// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractAble.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractAble : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FPS_API IInteractAble
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Interact(class AFPSPlayer* Player) = 0;
	
};
