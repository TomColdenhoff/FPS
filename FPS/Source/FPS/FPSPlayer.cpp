// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine//Classes/Components/SkeletalMeshComponent.h"
#include "BaseWeapon.h"
#include "SMG.h"
#include <typeinfo>
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Player/Interaction.h"
#include "Player/UIComponent.h"


// Sets default values
AFPSPlayer::AFPSPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateCamera();
	CreateInteractionComponent();
	CreateUIComponent();

	//Weapon Gets added through Inventory uncomment if player needs gun immidiatly
	//AddMainWeapon<USMG>();	
}

void AFPSPlayer::CreateCamera()
{
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FPPCamera"));
	CameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	CameraComponent->bUsePawnControlRotation = true;
}

void AFPSPlayer::CreateUIComponent()
{
	p_UIComponent = CreateDefaultSubobject<UUIComponent>(TEXT("UI Component"));
}

void AFPSPlayer::CreateInteractionComponent()
{
	p_InteractionComponent = CreateDefaultSubobject<UInteraction>(TEXT("Interaction Component"));
}


// Called when the game starts or when spawned
void AFPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	//Show the default HUD to the player
	ChangeWidget(m_DefaultPlayerHUD);
	//Register to On Empty Hand event
	p_UIComponent->OnHandClear.AddDynamic(this, &AFPSPlayer::ClearHands);
}

// Called every frame
void AFPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), (IsReloading ? TEXT("True") : TEXT("False")));
}

// Called to bind functionality to input
void AFPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Movement Axis
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSPlayer::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFPSPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSPlayer::AddControllerPitchInput);

	//Movement Actions
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AFPSPlayer::ToggleJump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &AFPSPlayer::ToggleJump);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &AFPSPlayer::ToggleRun);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &AFPSPlayer::ToggleRun);

	//Weapon Actions
	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &AFPSPlayer::Fire);
	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Released, this, &AFPSPlayer::StopFire);
	PlayerInputComponent->BindAction("Reload", EInputEvent::IE_Pressed, this, &AFPSPlayer::Reload);
	PlayerInputComponent->BindAction("ChangeWeaponMode", EInputEvent::IE_Pressed, this, &AFPSPlayer::ChangeWeaponMode);

	//Player Actions
	PlayerInputComponent->BindAction("Interact", EInputEvent::IE_Pressed, p_InteractionComponent, &UInteraction::Interact);
	PlayerInputComponent->BindAction("Inventory", EInputEvent::IE_Pressed, this, &AFPSPlayer::ToggleInventory);
}

void AFPSPlayer::MoveForward(float Value)
{
	if (!Controller)
		return;

	if (!m_IsRunning)
		Value *= 0.5f;

	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(direction, Value);
}

void AFPSPlayer::MoveRight(float Value)
{
	if (!Controller)
		return;

	if (!m_IsRunning)
		Value *= 0.5f;

	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(direction, Value);
}

void AFPSPlayer::ToggleJump()
{
	bPressedJump = !bPressedJump;
}

void AFPSPlayer::ToggleRun()
{
	m_IsRunning = !m_IsRunning;
}

void AFPSPlayer::Fire()
{
	if (IsReloading)
		return;

	if (CurrentWeapon == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is no current weapon"));
		return;
	}

	CurrentWeapon->Fire();
}

void AFPSPlayer::StopFire()
{
	if (CurrentWeapon == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is no current weapon"));
		return;
	}

	CurrentWeapon->ReleaseFire();
}

void AFPSPlayer::Reload()
{
	if (CurrentWeapon == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is no current weapon"));
		return;
	}

	IsReloading = CurrentWeapon->Reload();
}

void AFPSPlayer::ChangeWeaponMode()
{
	if (CurrentWeapon == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("There is no current weapon"));
		return;
	}

	CurrentWeapon->ChangeWeaponMode();
}

void AFPSPlayer::ChangeWidget(TSubclassOf<UUserWidget> NewWidget)
{
	if (m_CurrentHUD != nullptr)
	{
		m_CurrentHUD->RemoveFromViewport();
		m_CurrentHUD = nullptr;
	}

	if (NewWidget != nullptr)
	{
		m_CurrentHUD = CreateWidget<UUserWidget>(GetWorld(), NewWidget);
		if (m_CurrentHUD != nullptr)
		{
			m_CurrentHUD->AddToViewport();
		}
	}
}

//template<typename T>
//void AFPSPlayer::AddMainWeapon()
//{
//	// TODO Add class check
//
//	//TODO Change to game needs
//	CurrentWeaponMesh = CreateAbstractDefaultSubobject<T>(TEXT("CurrentWeaponMesh"));
//	CurrentWeaponMesh->SetOnlyOwnerSee(true);
//	CurrentWeaponMesh->SetupAttachment(CameraComponent);
//	CurrentWeaponMesh->bCastDynamicShadow = false;
//	CurrentWeaponMesh->CastShadow = false;
//
//	CurrentWeapon = Cast<UBaseWeapon>(CurrentWeaponMesh);
//
//	//Set values current weapon depends on
//	CurrentWeapon->SetValues(CameraComponent);
//	//Update the ammo for the UI
//	CurrentWeapon->GetAmmoUpdate();
//}

void AFPSPlayer::GiveDamage(float DamagaAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Hit by AI"));
}

void AFPSPlayer::Interact()
{
	p_InteractionComponent->Interact();
}

void AFPSPlayer::ToggleInventory()
{
		p_UIComponent->SwitchMode(EUIMode::Inventory);
}

void AFPSPlayer::ClearHands()
{
	if (CurrentWeaponMesh != nullptr)
	{
		CurrentWeaponMesh->DestroyComponent();
		CurrentWeaponMesh = nullptr;
	}
}

