// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine//Classes/Components/SkeletalMeshComponent.h"


// Sets default values
AFPSPlayer::AFPSPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FPPCamera"));
	CameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	CameraComponent->bUsePawnControlRotation = true;

	// TODO Change to game needs
	//CurrentWeaponMesh = CreateAbstractDefaultSubobject<USkeletalMeshComponent>(TEXT("CurrentWeaponMesh"));
	//CurrentWeaponMesh->SetOnlyOwnerSee(true);
	//CurrentWeaponMesh->SetupAttachment(CameraComponent);
	//CurrentWeaponMesh->bCastDynamicShadow = false;
	//CurrentWeaponMesh->CastShadow = false;
	
}

// Called when the game starts or when spawned
void AFPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSPlayer::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFPSPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSPlayer::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AFPSPlayer::ToggleJump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &AFPSPlayer::ToggleJump);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &AFPSPlayer::ToggleRun);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &AFPSPlayer::ToggleRun);
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

}

