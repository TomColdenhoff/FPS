// Fill out your copyright notice in the Description page of Project Settings.

#include "Interaction.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "FPSPlayer.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
UInteraction::UInteraction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteraction::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteraction::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteraction::Interact()
{
	FHitResult outHit;
	AFPSPlayer* player = Cast<AFPSPlayer>(GetOwner());
	FVector cameraPosition = player->CameraComponent->GetComponentLocation();
	FVector forwardVector = player->CameraComponent->GetForwardVector();

	bool gotHit = GetWorld()->LineTraceSingleByChannel(outHit, cameraPosition, ((cameraPosition + forwardVector) * m_InteractionDistance), ECC_Visibility);

	if (bDebug)
	{
		DrawDebugLine(GetWorld(), cameraPosition, ((cameraPosition + forwardVector) * m_InteractionDistance), FColor::Purple, false, 5.0f);
	}

	if (gotHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor: %s"), *outHit.Actor->GetName());
	}


}

