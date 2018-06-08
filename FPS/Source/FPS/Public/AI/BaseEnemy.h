// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitAble.h"
#include "BaseEnemy.generated.h"

UCLASS()
class FPS_API ABaseEnemy : public ACharacter, public IHitAble
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGunFireDelegate);

public:
	// Sets default values for this character's properties
	ABaseEnemy();

protected:

	/*The health of the enemy*/
	UPROPERTY(EditAnywhere, Category = "AI")
	float Health;

	/*The fire rate of the enemy*/
	UPROPERTY(EditAnywhere, Category = "Shooting")
	float FireRate;

	/*The damage the enemy deals when he hits someting*/
	UPROPERTY(EditDefaultsOnly, Category = "Shooting")
	float BulletDamage;

	/*If the enemey is following a waypoint path*/
	UPROPERTY(EditAnywhere, Category = "AI")
	bool bFollowsWaypointPath;

	/*If the enemy is currently aiming*/
	bool bIsAiming = false;

	UPROPERTY(EditDefaultsOnly)
	FName FrontWeaponSocketName;

	/*The sensing component of the AI*/
	UPROPERTY(EditDefaultsOnly)
	class UPawnSensingComponent* PawnSensingComponent;

	/*The blackboard component of the AI (BT uses this)*/
	class UBlackboardComponent* BlackboardComponent;

	/*The behaviour tree of the AI*/
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviourTree;

	/*The blackboard of the AI*/
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBlackboardData* Blackboard;

	/*The particle component of the AI*/
	
	class UParticleSystemComponent* ParticleComponent;

	/*The muzzle flash particle of the AI*/
	class UParticleSystem* MuzzleFlashPartical;
	
	/*The Audio Component in front of the weapon of the AI*/
	UPROPERTY(EditDefaultsOnly)
	class UAudioComponent* AudioComponent;
	
	/*The gun shot sound of the AI*/
	class USoundBase* GunShotSound;

	/*The waypoints the AI walks*/
	TArray<AActor*> Waypoints;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*Function gets called when enemy is spotted*/
	virtual void OnSeePlayer(APawn* Pawn);

	/*Function gets called when AI hears a noise*/
	virtual void OnHearNoise(APawn* Pawn, const FVector& Location, float Volume);

	/*Sets the Muzzle flash particle*/
	virtual void SetMuzzleParticle();

	/*Sets the weapon audio*/
	virtual void SetWeaponAudio();

	/*Sets*/

	/*Returns if the AI is aiming or not*/
	UFUNCTION(BlueprintCallable, Category = "AI")
	bool GetIsAiming() { return bIsAiming; }

	/*Returns if the ai is following a waypoint path or not*/
	bool GetFollowPath() { return bFollowsWaypointPath;}

	float GetFireRate() { return FireRate; }

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Inherited via IHitAble
	/*Gives Damage to the enemy*/
	virtual void GiveDamage(float DamagaAmount);

	virtual void FireWeapon();
	
	


};
