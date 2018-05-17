// Fill out your copyright notice in the Description page of Project Settings.

#include "Dummy.h"


// Sets default values
ADummy::ADummy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100.0f;

	TargetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	RootComponent = (USceneComponent*)TargetMesh;
}

// Called when the game starts or when spawned
void ADummy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADummy::DestroyTarget()
{
	Destroy();
}

void ADummy::DamageTarget(float Damage)
{
	Health -= Damage; 

	if (Health <= 0.0f)
	{
		DestroyTarget();
	}
}

