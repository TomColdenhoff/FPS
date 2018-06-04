// Fill out your copyright notice in the Description page of Project Settings.

#include "CoverPoint.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h" 


// Sets default values
ACoverPoint::ACoverPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	p_Collider = CreateDefaultSubobject<USphereComponent>(FName("Capsule Component"));
	RootComponent = p_Collider;

	p_Collider->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Block);
	Tags.Add(FName("Cover"));

	
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
	FCollisionShape myColSphere = FCollisionShape::MakeSphere(9.0f);

	bool isHit = GetWorld()->SweepMultiByChannel(outHits, GetActorLocation(), GetActorLocation(), FQuat::Identity, ECC_WorldStatic, myColSphere);

	if (isHit)
	{
		Destroy();
	}
}

