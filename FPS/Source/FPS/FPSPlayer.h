// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitAble.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "FPSPlayer.generated.h"

UCLASS()
class FPS_API AFPSPlayer : public ACharacter, public IHitAble
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewWeapon);
public:
	// Sets default values for this character's properties
	AFPSPlayer();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//Event when new weapon is attached to player
	UPROPERTY(BlueprintAssignable)
	FOnNewWeapon NewWeaponUpdate;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*Damage function of player*/
	virtual void GiveDamage(float DamagaAmount);

	//Movement Functions
	/*Moves the player forward*/
	void MoveForward(float Value);
	/*Moved the player to the right*/
	void MoveRight(float Value);
	/*Toggles player jumping*/
	void ToggleJump();
	/*Toggles player running*/
	void ToggleRun();

	//Weapon Control Functions
	/*Calls fire function of current weapon*/
	void Fire();
	/*Calls stop fire function of current weapon*/
	void StopFire();
	/*Calls the reload function of the current weapon*/
	void Reload();
	/*Calls the weapon mode change function of the current weapon*/
	void ChangeWeaponMode();

	
	void ChangeWidget(TSubclassOf<class UUserWidget> NewWidget);

	/*Creates a weapon based on its class*/
	template<typename T> void AddMainWeapon();	

	/*Returns the running state of the player*/
	bool GetIsRunning() { return m_IsRunning; }

	UFUNCTION(BlueprintCallable, Category = "UI")
	class UUIComponent* GetUIComponent() { return p_UIComponent; }

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

	UPROPERTY(VisibleAnywhere)
	class UInteraction* p_InteractionComponent;

	UPROPERTY(VisibleAnywhere)
	class UUIComponent* p_UIComponent;

	bool m_IsRunning = false;

	/*Creates and attachs a camera to the player*/
	void CreateCamera();

	/*Creates and attaches ui component*/
	void CreateUIComponent();

	/*Creates and attaches a interaction Component*/
	void CreateInteractionComponent();

	/*Calls interaction function on interaction component*/
	void Interact();

	//Toggle the visibility of the HUD
	void ToggleInventory();

	/*Clear the hands of the player*/
	UFUNCTION()
	void ClearHands();

	
};

template<typename T>
void AFPSPlayer::AddMainWeapon()
{
	// TODO Add class check
	CurrentWeaponMesh = NewObject<T>(this, TEXT("CurrentWeaponMesh"));

	CurrentWeaponMesh->OnComponentCreated();
	CurrentWeaponMesh->GetOwner()->GetName();
	CurrentWeaponMesh->SetOnlyOwnerSee(true);
	CurrentWeaponMesh->SetupAttachment(CameraComponent);
	CurrentWeaponMesh->bCastDynamicShadow = false;
	CurrentWeaponMesh->CastShadow = false;
	if (CurrentWeaponMesh->GetOwner()->IsValidLowLevel())
		CurrentWeaponMesh->RegisterComponent();

	if (IsValid(CurrentWeaponMesh))
		CurrentWeapon = Cast<UBaseWeapon>(CurrentWeaponMesh);

	//Set values current weapon depends on
	CurrentWeapon->SetValues(CameraComponent);
	//Let interested items know there is a new gun
	NewWeaponUpdate.Broadcast();
	//Update the ammo for the UI
	CurrentWeapon->GetAmmoUpdate();
}