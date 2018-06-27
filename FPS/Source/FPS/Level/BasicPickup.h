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

	UTexture2D* GetInventoryImage() const { return InvetoryImage; }
	FVector2D GetSlotSize() const { return SlotSize; }
	FString GetName() const { return Name; }
	struct FSlotImage* GetFSlotImage() const { return CurrentSlotImage; }

	void SetFSlotImage(struct FSlotImage* FSlotImage) { CurrentSlotImage = FSlotImage; };

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

	struct FSlotImage* CurrentSlotImage = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	
};
