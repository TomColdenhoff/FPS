// Fill out your copyright notice in the Description page of Project Settings.

#include "AssaultEnemy.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "UnitAIController.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h" 
#include "Engine/SkeletalMeshSocket.h"
#include "Runtime/Core/Public/Math/UnrealMathUtility.h" 
#include "DrawDebugHelpers.h"


AAssaultEnemy::AAssaultEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(FName("Sensing Component"));
	SetMuzzleParticle();
	SetWeaponAudio();
}

void AAssaultEnemy::SetMuzzleParticle()
{
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(FName("Muzzle Flash Particle Component"));

	if (ParticleComponent == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Particle Component is a nullptr"));
		return;
	}

	ParticleComponent->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules(EAttachmentRule::KeepRelative, false), "WeaponFront");

	FString filePath = "Particle Component'/Game/Particles/Muzzle_Flash/P_Muzzle_Flash.P_Muzzle_Flash'";

	ConstructorHelpers::FObjectFinder<UParticleSystem> muzzleParticle(*filePath);

	if (muzzleParticle.Object == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("muzzle Particle file is a nullptr"));
		return;
	}

	MuzzleFlashPartical = muzzleParticle.Object;
	ParticleComponent->SetTemplate(MuzzleFlashPartical);

}

void AAssaultEnemy::SetWeaponAudio()
{
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));

	if (AudioComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AudioComponent is nullptr"));
		return;
	}

	//Attach Audio Component to socket in front of weapon
	AudioComponent->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules(EAttachmentRule::KeepRelative, false), "WeaponFront");

	ConstructorHelpers::FObjectFinder<USoundBase> gunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Silenced_SMG_Shot.Silenced_SMG_Shot'"));

	if (gunShot.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("gunShot sound file is nullptr"));
		return;
	}

	GunShotSound = gunShot.Object;
	//Set default Audio Component sound to gun shot
	AudioComponent->SetSound(GunShotSound);
	//Make sure the Audio Component does not play on activation
	AudioComponent->bAutoActivate = false;

	AudioComponent->bAllowSpatialization = true;
	AudioComponent->bOverrideAttenuation = true;
}

void AAssaultEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (PawnSensingComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("There is no Pawn Sensing Component!"));
		return;
	}

	//Bind functions to the sensing component
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &AAssaultEnemy::OnSeePlayer);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &AAssaultEnemy::OnHearNoise);

	if (Controller != nullptr)
	{
		//Get the blackboard component to later set values on it from certain functions
		AUnitAIController* controller = Cast<AUnitAIController>(Controller);
		BlackboardComponent = controller->GetBlackboardComponent();
	}

	//Get all colliders
	TArray<UCapsuleComponent*> colliderComponents;
	this->GetComponents<UCapsuleComponent>(colliderComponents);

	StandCapsuleComponent = Cast<UCapsuleComponent>(colliderComponents[0]);
	CrouchCapsuleComponent = Cast<UCapsuleComponent>(colliderComponents[1]);
}

void AAssaultEnemy::OnSeePlayer(APawn * Pawn)
{
	//On See Player Aim direct at player
	BlackboardComponent->SetValueAsObject(FName("Target"), Pawn);
	bIsAiming = true;
}

void AAssaultEnemy::OnHearNoise(APawn * Pawn, const FVector & Location, float Volume)
{
}

void AAssaultEnemy::FireWeapon(AActor* Target)
{

	if (OnFire.IsBound())
	{
		OnFire.Broadcast();
	}

	//Fire the "bullet"
	TArray<FHitResult> outHits;
	FVector socketLocation = GetMesh()->GetSocketByName(FrontWeaponSocketName)->GetSocketLocation(GetMesh());
	FVector endLocation = (Target->GetActorLocation() - FVector(FMath::FRandRange(-BulletSpread.X, BulletSpread.X), FMath::FRandRange(-BulletSpread.Y, BulletSpread.Y), FMath::FRandRange(-BulletSpread.Z, BulletSpread.Z))) - socketLocation;
	endLocation.Normalize();

	endLocation *= BulletDistance;

	bool bHit = GetWorld()->LineTraceMultiByChannel(outHits, socketLocation, endLocation, ECC_Visibility);
	DrawDebugLine(GetWorld(), socketLocation, endLocation, FColor::Purple, true, 5.0f);

	if (bHit)
	{
		for (int32 i = 0; i != outHits.Num(); ++i)
		{
			if (IHitAble* hitObject = Cast<IHitAble>(outHits[i].Actor))
			{
				hitObject->GiveDamage(BulletDamage);
			}

		}

	}

	// Play Muzzle Flash
	ParticleComponent->Deactivate();
	ParticleComponent->Activate();

	//Play Gun Shot
	AudioComponent->Stop();
	AudioComponent->Play();
}

void AAssaultEnemy::GiveDamage(float DamagaAmount)
{
	Health -= DamagaAmount;

	if (Health <= 0)
	{
		Die();
	}
}
