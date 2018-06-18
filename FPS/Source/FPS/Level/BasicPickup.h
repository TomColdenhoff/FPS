// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicPickup.generated.h"

UCLASS()
class FPS_API ABasicPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* p_StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	UTexture2D* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	UTexture2D* DragImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	UTexture2D* InvetoryImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	FVector2D SlotSize;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
