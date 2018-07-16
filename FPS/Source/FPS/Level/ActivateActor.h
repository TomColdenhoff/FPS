// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractAble.h"
#include "ActivateActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UActivateActor : public UActorComponent, public IInteractAble
{
	GENERATED_BODY()

	// Use normal delegate becuase we don't have to serialize it
	DECLARE_DELEGATE(FOnActivate);
public:	
	// Sets default values for this component's properties
	UActivateActor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Inherited via IInteractAble
	virtual void Interact(AFPSPlayer *Player);

	FOnActivate OnActivate;

private:
	
	UPROPERTY(EditAnywhere)
	AActor* p_ActivateBehaviour;

};
