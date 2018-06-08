// Fill out your copyright notice in the Description page of Project Settings.

#include "AssaultEnemy.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "UnitAIController.h"

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

	ParticleComponent->AttachTo(Cast<USceneComponent>(GetMesh()), FrontWeaponSocketName);

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
	AudioComponent->AttachTo(Cast<USceneComponent>(GetMesh()), FrontWeaponSocketName);

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
}

void AAssaultEnemy::OnSeePlayer(APawn * Pawn)
{
}

void AAssaultEnemy::OnHearNoise(APawn * Pawn, const FVector & Location, float Volume)
{
}
