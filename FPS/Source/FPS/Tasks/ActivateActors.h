// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StartBehaviour.h"
#include "ActivateActors.generated.h"

UCLASS()
class FPS_API AActivateActors : public AActor, public IStartBehaviour
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActivateActors();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Inherited via IStartBehaviour
	virtual void StartBehaviour();

private:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> m_ActorsToDisable;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> m_ActorsToEnable;

};
