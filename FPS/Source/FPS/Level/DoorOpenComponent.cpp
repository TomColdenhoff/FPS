// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorOpenComponent.h"
#include "../FPSPlayer.h"


// Sets default values for this component's properties
UDoorOpenComponent::UDoorOpenComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
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

	// ...
	if (bShouldRotate)
	{
		GetOwner()->SetActorRotation(FMath::Lerp(GetOwner()->GetActorRotation(), m_OpenDoorRotation.Rotation(), m_OpenRate));

		if (GetOwner()->GetActorRotation().Equals(m_OpenDoorRotation.Rotation(), 1.0f))
		{
			bShouldRotate = false;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("%s"), (bShouldRotate ? TEXT("True") : TEXT("False")));

}

void UDoorOpenComponent::Interact(AFPSPlayer* Player)
{
	OpenDoor(Player);
}

void UDoorOpenComponent::OpenDoor(AFPSPlayer* Player)
{
	bShouldRotate = true;

	if (!bIsOpen)
	{
		bIsOpen = true;
		
		float dotProduct = FVector::DotProduct(GetOwner()->GetActorRightVector(), Player->GetActorForwardVector());

		if (dotProduct >= 0)
		{
			m_OpenDoorRotation = FVector(0, -m_TargetOpenRotation, 0);
		}
		else if (dotProduct < 0)
		{
			m_OpenDoorRotation = FVector(0, m_TargetOpenRotation, 0);
		}
	}

	else
	{
		bIsOpen = false;
		m_OpenDoorRotation = FVector(0, 0, 0);
	}


}

