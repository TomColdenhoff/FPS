// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TaskManager.generated.h"

UCLASS()
class FPS_API ATaskManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATaskManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> m_Tasks;

	FTimerHandle m_TaskTimerHandle;

	/*Starts the task based of an actor*/
	void StartTask(AActor* TaskActor);

	/*Start the first task*/
	void StartFirstTask();

	
	
};
