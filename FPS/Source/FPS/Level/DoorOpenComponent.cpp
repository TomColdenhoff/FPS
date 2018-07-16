// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorOpenComponent.h"
#include "../FPSPlayer.h"
#include "../Player/UIComponent.h"


// Sets default values for this component's properties
UDoorOpenComponent::UDoorOpenComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	p_Owner = GetOwner();
}


// Called when the game starts
void UDoorOpenComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDoorOpenComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (p_Owner == nullptr)
	{
		return;
	}

	// ...
	if (bShouldRotate)
	{
		p_Owner->SetActorRotation(FMath::Lerp(p_Owner->GetActorRotation(), m_OpenDoorRotation.Rotation(), m_OpenRate));

		if (p_Owner->GetActorRotation().Equals(m_OpenDoorRotation.Rotation(), 1.0f))
		{
			bShouldRotate = false;
		}
	}
}

void UDoorOpenComponent::Interact(AFPSPlayer* Player)
{
	if (p_NeededActor == nullptr)
		OpenDoor(Player);
	else if (Player->GetUIComponent()->ContainsItem(p_NeededActor))
	{
		//Fire Delegate of opening door
		OpenDoor(Player);
	}
}

void UDoorOpenComponent::OpenDoor(AFPSPlayer* Player)
{
	//Execute the delegate
	OnDoorOpen.ExecuteIfBound();

	if (p_Owner == nullptr)
	{
		return;
	}

	bShouldRotate = true;

	//If door is not open allready
	if (!bIsOpen)
	{
		bIsOpen = true;
		
		float dotProduct = FVector::DotProduct(p_Owner->GetActorRightVector(), Player->GetActorForwardVector());

		//Let the door open away from the player
		if (dotProduct >= 0)
		{
			m_OpenDoorRotation = FVector(0, -m_TargetOpenRotation, 0);
		}
		else if (dotProduct < 0)
		{
			m_OpenDoorRotation = FVector(0, m_TargetOpenRotation, 0);
		}
	}

	//If the door is allready open
	else
	{
		//Close the door
		bIsOpen = false;
		m_OpenDoorRotation = FVector(0, 0, 0);
	}


}

