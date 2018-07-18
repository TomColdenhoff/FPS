// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Task.h"
#include "ReachPosition.generated.h"

UCLASS()
class FPS_API AReachPosition : public AActor, public ITask
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReachPosition();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Inherited via ITask
	virtual bool Update() override;

	virtual void OnTaskEnd() override;

	virtual void OnTaskStart();

private:
	
	UPROPERTY(EditAnywhere)
	AActor* p_BeginBehaviour;

	UPROPERTY(EditAnywhere)
	AActor* p_EndBehaviour;

	UPROPERTY(EditAnywhere)
	FString m_TaskText;

	UPROPERTY(EditAnywhere)
	AActor* p_Destination;

	UPROPERTY(EditAnywhere)
	float m_AcceptanceDistance;

	AActor* p_PlayerActor;

};
