// Fill out your copyright notice in the Description page of Project Settings.

#include "CoverPoint.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"
#include "Engine/World.h"


// Sets default values
ACoverPoint::ACoverPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	p_SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("Scene Component"));
}

// Called when the game starts or when spawned
void ACoverPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoverPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACoverPoint::CheckSpawnCollision()
{
	TArray<FHitResult> outHits;
	FCollisionShape myColSphere = FCollisionShape::MakeSphere(10.0f);

	bool isHit = GetWorld()->SweepMultiByChannel(outHits, GetActorLocation(), GetActorLocation(), FQuat::Identity, ECC_WorldStatic, myColSphere);

	if (isHit)
	{
		Destroy();
	}
}

