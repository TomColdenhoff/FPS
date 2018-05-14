// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSPlayer.generated.h"

UCLASS()
class FPS_API AFPSPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void ToggleJump();
	void ToggleRun();

	void Fire();
	void Reload();
	void ChangeWeaponMode();

	template<typename T> void AddMainWeapon();

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent* CurrentWeaponMesh;

	bool GetIsRunning() { return m_IsRunning; }

private:

	bool m_IsRunning = false;

	class UBaseWeapon* m_CurrentWeapon;
	
};