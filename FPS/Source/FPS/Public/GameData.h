// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tasks/TaskManager.h"
#include "GameData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class FPS_API UGameData : public UObject
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskUpdate, FString, stringText);

public:
	
	/*Sets the task description in the HUD*/
	void SetTaskText(FString string);
	void IntializeTaskText(class UTextBlock* TextBlock);

	UPROPERTY(BlueprintAssignable)
	FOnTaskUpdate OnTaskUpdate;

private:
	 
	class UTextBlock* p_TastTextBlock;

};
