// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/AIModule/Classes/AIController.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseEnemy::OnSeePlayer(APawn * Pawn)
{
}

void ABaseEnemy::OnHearNoise(APawn * Pawn, const FVector & Location, float Volume)
{
}

void ABaseEnemy::SetMuzzleParticle()
{
}

void ABaseEnemy::SetWeaponAudio()
{
}

void ABaseEnemy::Die()
{
	//Fire OnDeath event
	if (OnDeath.IsBound())
	{
		OnDeath.Broadcast();
	}

	//Update behaviour tree
	bIsDeath = true;
	BlackboardComponent->SetValueAsBool("bIsDeath", bIsDeath);

	//Disable Collision
	StandCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CrouchCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	//Stop rotating and moving
	Cast<AAIController>(GetController())->StopMovement();
	Cast<AAIController>(GetController())->ClearFocus(EAIFocusPriority::Gameplay);


	//Todo mix death anim with ragdoll
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseEnemy::GiveDamage(float DamagaAmount)
{
}

void ABaseEnemy::FireWeapon(AActor* Target)
{
}

void ABaseEnemy::GoDucking()
{
	//Fire on duck event
	if (OnDuck.IsBound())
	{
		OnDuck.Broadcast();
	}

	bIsDucking = !bIsDucking;

	BlackboardComponent->SetValueAsBool("bIsDucking", bIsDucking);

	if (bIsDucking)
	{
		StandCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CrouchCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		StandCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		CrouchCapsuleComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

