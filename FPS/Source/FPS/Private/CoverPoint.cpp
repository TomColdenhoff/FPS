// Fill out your copyright notice in the Description page of Project Settings.

#include "CoverPoint.h"


// Sets default values
ACoverPoint::ACoverPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	p_SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("Scene Component"));
	SetRootComponent(p_SceneComponent);
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

