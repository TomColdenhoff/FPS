// Fill out your copyright notice in the Description page of Project Settings.

#include "AssualtCharacter.h"
#include "UnitAIController.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"


// Sets default values
AAssualtCharacter::AAssualtCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(FName("Sensing Component"));
	SetMuzzleParticle();
	SetWeaponAudio();
}

// Called when the game starts or when spawned
void AAssualtCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (PawnSensingComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("There is no Pawn Sensing Component!"));
		return;
	}

	PawnSensingComponent->OnSeePawn.AddDynamic(this, &AAssualtCharacter::OnSeePlayer);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &AAssualtCharacter::OnHearNoise);

	if (Controller != nullptr)
	{
		AUnitAIController* controller = Cast<AUnitAIController>(Controller);
		m_BlackboardComponent = controller->GetBlackboardComponent();
	}
}

// Called every frame
void AAssualtCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAssualtCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAssualtCharacter::OnSeePlayer(APawn * Pawn)
{
	m_BlackboardComponent->SetValueAsObject(FName("Target"), Pawn);
	m_IsAiming = true;
}

void AAssualtCharacter::OnHearNoise(APawn * Pawn, const FVector & Location, float Volume)
{
}

void AAssualtCharacter::FireWeapon()
{
	if (OnFire.IsBound())
	{
		OnFire.Broadcast();
	}

	p_ParticleComponent->Deactivate();
	p_ParticleComponent->Activate();

	p_AudioComponent->Stop();
	p_AudioComponent->Play();
}

void AAssualtCharacter::SetMuzzleParticle()
{
	p_ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(FName("Muzzle Flash Particel Component"));
	
	if (p_ParticleComponent == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Particle Component is a nullptr"));
		return;
	}

	p_ParticleComponent->AttachTo(Cast<USceneComponent>(GetMesh()), FName("WeaponFront"));

	FString filePath = "Particle Component'/Game/Particles/Muzzle_Flash/P_Muzzle_Flash.P_Muzzle_Flash'";

	ConstructorHelpers::FObjectFinder<UParticleSystem> muzzleParticle (*filePath);

	if (muzzleParticle.Object == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("muzzle Particle file is a nullptr"));
		return;
	}

	p_MuzzleFlashPartical = muzzleParticle.Object;
	p_ParticleComponent->SetTemplate(p_MuzzleFlashPartical);

}

void AAssualtCharacter::SetWeaponAudio()
{
	p_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));

	if (p_AudioComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AudioComponent is nullptr"));
		return;
	}

	//Attach Audio Component to socket in front of weapon
	p_AudioComponent->AttachTo(Cast<USceneComponent>(GetMesh()), FName("WeaponFront"));

	ConstructorHelpers::FObjectFinder<USoundBase> gunShot(TEXT("SoundBase'/Game/Sound/SFX/SMG/Silenced_SMG_Shot.Silenced_SMG_Shot'"));

	if (gunShot.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("gunShot sound file is nullptr"));
		return;
	}

	p_GunShotSound = gunShot.Object;
	//Set default Audio Component sound to gun shot
	p_AudioComponent->SetSound(p_GunShotSound);
	//Make sure the Audio Component does not play on activation
	p_AudioComponent->bAutoActivate = false;

	p_AudioComponent->bAllowSpatialization = true;
	p_AudioComponent->bOverrideAttenuation = true;
}

void AAssualtCharacter::GiveDamage(float DamageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Took Damage"));
}

