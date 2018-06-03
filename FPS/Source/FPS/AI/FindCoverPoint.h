// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FindCoverPoint.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UFindCoverPoint : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) override;
	
private:
	/*Finds all nearby Cover Points*/
	TArray<class ACoverPoint*> GetCoverPoints(AActor* Owner);
	/*Finds the usable cover point from all found cover points*/
	bool FindUsablePoint(TArray<class ACoverPoint*> CoverPoints, ACoverPoint& OutCoverPoint);
	/*Set cover point for AI*/
	void SetCoverPoint(ACoverPoint CoverPoint);

	UPROPERTY(EditAnywhere, Category = "AI Cover")
	float m_SearchRadius;
	
	UPROPERTY(EditAnywhere, Category = "AI Cover")
	bool m_DrawDebug;

};
