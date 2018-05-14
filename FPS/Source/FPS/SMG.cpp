// Fill out your copyright notice in the Description page of Project Settings.

#include "SMG.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"

USMG::USMG()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh(TEXT("SkeletalMesh'/Game/Models/Player/Arms/Arms_SMG.Arms_SMG'"));

	if (skeletalMesh.Object != nullptr)
		SetSkeletalMesh(skeletalMesh.Object);
	else
		UE_LOG(LogTemp, Warning, TEXT("nullptr"));

	ConstructorHelpers::FObjectFinder<UAnimBlueprint> animationInstance(TEXT("AnimInstance'/Game/Animations/SMG/BP_SMGAnim.BP_SMGAnim'"));

	if (animationInstance.Object != nullptr)
		SetAnimInstanceClass(animationInstance.Object->GeneratedClass);
	else
		UE_LOG(LogTemp, Warning, TEXT("nullptr"));

	SetRelativeLocation(FVector(40, 10, -20));
	SetRelativeRotation(FRotator(0, -90, 0));
}

void USMG::BeginPlay()
{
	SetDefaultValues();
}

void USMG::Fire()
{
	UE_LOG(LogTemp, Warning, TEXT("Fire"));
}

void USMG::Reload()
{
	UE_LOG(LogTemp, Warning, TEXT("Reload"));
}

void USMG::ChangeWeaponMode()
{
	UE_LOG(LogTemp, Warning, TEXT("Change State"));
}


void USMG::SetDefaultValues()
{
	AmmoInClip = MAX_CLIP_SIZE;
	AmmoOutOfClip = MAX_OUT_OF_CLIP_AMMO;
}
