// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"

UBaseWeapon::UBaseWeapon()
{

}

void UBaseWeapon::SetWeaponMesh(FString FilePath)
{
	ConstructorHelpers::FObjectFinder<USkeletalMesh> skeletalWeaponMesh(*FilePath);

	if (skeletalWeaponMesh.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Skeletal Weapon Mesh is nullptr"));
		return;
	}

	SetSkeletalMesh(skeletalWeaponMesh.Object);

	SetRelativeLocation(FVector(40, 10, -20));
	SetRelativeRotation(FRotator(0, -90, 0));
}

void UBaseWeapon::SetWeaponAnimation(FString FilePath)
{
	ConstructorHelpers::FObjectFinder<UClass> animationInstance(*FilePath);

	if (animationInstance.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Animation Instance is nullptr"));
		return;
	}

	
	SetAnimInstanceClass(animationInstance.Object);
}

void UBaseWeapon::SetWeaponParticle(FString FilePath)
{
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(FName("Fire Particle Component"));

	if (ParticleComponent == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Particle Component is a nullptr"));
		return;
	}

	//Attach Particle Component to socket in front of weapon
	ParticleComponent->AttachTo(this, FName("Weapon Front"));

	ConstructorHelpers::FObjectFinder<UParticleSystem> muzzleFireParticle(*FilePath);

	if (muzzleFireParticle.Object == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("fireParticle file is a nullptr"));
		return;
	}

	MuzzleFlashPartical = muzzleFireParticle.Object;
	ParticleComponent->SetTemplate(MuzzleFlashPartical);
}

void UBaseWeapon::GetAmmoUpdate()
{
	OnAmmoChange.Broadcast(AmmoInClip, AmmoOutOfClip);
}
