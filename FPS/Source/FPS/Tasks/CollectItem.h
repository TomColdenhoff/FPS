// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Task.h"
#include "CollectItem.generated.h"

UCLASS()
class FPS_API ACollectItem : public AActor, public ITask
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Inherited via ITask
	virtual void OnTaskEnd() override;

	virtual bool Update() override;

	virtual void OnTaskStart() override;

private:
	UPROPERTY(EditAnywhere)
	class ABasicPickup* ActorToCollect;

	class UUIComponent* p_Inventory = nullptr;

	UPROPERTY(EditAnywhere)
	AActor* p_TaskBeginBehaviour;

	UPROPERTY(EditAnywhere)
	AActor* p_TaskEndBehaviour;
};
