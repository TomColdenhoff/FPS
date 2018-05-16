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
	void StopFire();
	void Reload();
	void ChangeWeaponMode();

	void ChangeWidget(TSubclassOf<class UUserWidget> NewWidget);

	template<typename T> void AddMainWeapon();

	bool GetIsRunning() { return m_IsRunning; }

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent* CurrentWeaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player State")
	bool IsReloading = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	class UBaseWeapon* CurrentWeapon;

private:

	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<UUserWidget> m_DefaultPlayerHUD;

	UPROPERTY()
	UUserWidget* m_CurrentHUD;

	bool m_IsRunning = false;


	
};