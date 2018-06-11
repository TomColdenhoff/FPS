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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathDelegate);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDuckDelegate);

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

	/*The distance of the "bullet line trace"*/
	UPROPERTY(EditDefaultsOnly, Category = "Shooting")
	float BulletDistance;

	/*The bullet spread the enemy has*/
	UPROPERTY(EditDefaultsOnly, Category = "Shooting")
	FVector2D BulletSpread;

	/*If the enemey is following a waypoint path*/
	UPROPERTY(EditAnywhere, Category = "AI")
	bool bFollowsWaypointPath;

	/*If the enemy is currently aiming*/
	bool bIsAiming = false;

	/*If the AI is death*/
	bool bIsDeath = false;

	/*If the AI is ducking*/
	bool bIsDucking = false;

	UPROPERTY(EditDefaultsOnly)
	FName FrontWeaponSocketName;

	/*The sensing component of the AI*/
	UPROPERTY(EditDefaultsOnly)
	class UPawnSensingComponent* PawnSensingComponent;

	/*The standing capsule component of the AI*/
	class UCapsuleComponent* StandCapsuleComponent;

	/*The crouching capsule component of the AI*/
	class UCapsuleComponent* CrouchCapsuleComponent;

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
	UPROPERTY(EditAnywhere, Category = "AI")
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

	void Die();

	/*Sets*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Inherited via IHitAble
	/*Gives Damage to the enemy*/
	virtual void GiveDamage(float DamagaAmount);

	virtual void FireWeapon(AActor* Target);

	//Function to go ducking
	void GoDucking();

	/*Returns if the AI is aiming or not*/
	UFUNCTION(BlueprintCallable, Category = "AI")
	bool GetIsAiming() { return bIsAiming; }

	/*Returns if the ai is following a waypoint path or not*/
	bool GetFollowPath() { return bFollowsWaypointPath; }

	/*Return the Fire Rate of the AI*/
	float GetFireRate() { return FireRate; }

	/*Return the Blackboard Data*/
	UBlackboardData* GetBlackboardData() { return Blackboard; }

	/*Return the Behaviour tree of the AI*/
	UBehaviorTree* GetBehaviourTree() { return BehaviourTree; }

	TArray<AActor*> GetWaypoints() { return Waypoints; }
	
	UPROPERTY(BlueprintAssignable, Category = "Shooting")
	FGunFireDelegate OnFire;

	UPROPERTY(BlueprintAssignable, Category = "AI")
	FDeathDelegate OnDeath;

	UPROPERTY(BlueprintAssignable, Category = "AI")
	FDuckDelegate OnDuck;

};
