// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UBaseWeapon::UBaseWeapon()
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalMesh (TEXT("SkeletalMesh'/Game/Models/Player/Arms/Arms_SMG.Arms_SMG'"));

	if (skeletalMesh.Object != nullptr)
		SetSkeletalMesh(skeletalMesh.Object);
	else
		UE_LOG(LogTemp, Warning, TEXT("nullptr"));

}
