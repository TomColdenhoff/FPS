// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Task.h"
#include "CollectItem.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UCollectItem : public UObject, public ITask
{
	GENERATED_BODY()
	
	
	
	
public:
	virtual void OnTaskStart() override;


	virtual void OnTaskEnd() override;

};
