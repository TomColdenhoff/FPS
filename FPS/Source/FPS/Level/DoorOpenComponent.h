// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractAble.h"
#include "DoorOpenComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UDoorOpenComponent : public UActorComponent, public IInteractAble
{
	GENERATED_BODY()

	// Use normal delegate becuase we don't have to serialize it
	DECLARE_DELEGATE(FOnDoorOpen);
public:	
	// Sets default values for this component's properties
	UDoorOpenComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Inherited via IInteractAble
	virtual void Interact(class AFPSPlayer* Player);

	FOnDoorOpen OnDoorOpen;

private:
	/*Calculate Values for door openening*/
	void OpenDoor(class AFPSPlayer* Player);

	bool bShouldRotate = false;
	bool bIsOpen = false;

	/*The rotation the door should aim for*/
	UPROPERTY(EditAnywhere, Category = "Interaction")
	float m_TargetOpenRotation;

	/*The speed the door should open*/
	UPROPERTY(EditAnywhere, Category = "Interaction")
	float m_OpenRate;

	/*the rotation the door will actually get*/
	FVector m_OpenDoorRotation;

	AActor* p_Owner = nullptr;

	UPROPERTY(EditAnywhere)
	class ABasicPickup* p_NeededActor;
};
