// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AssualtCharacter.generated.h"

UCLASS()
class FPS_API AAssualtCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAssualtCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnSeePlayer(APawn* Pawn);
	UFUNCTION()
	void OnHearNoise(APawn* Pawn, const FVector& Location, float Volume);

	bool GetFollowPath() { return m_FollowPath; }

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviourTree;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBlackboardData* Blackboard;

	UPROPERTY(EditAnywhere, Category = "AI")
	TArray<AActor*> Waypoints;

private:
	UPROPERTY(EditDefaultsOnly)
	class UPawnSensingComponent* PawnSensingComponent;
	class UBlackboardComponent* m_BlackboardComponent;

	UPROPERTY(EditAnywhere, Category = "AI")
	bool m_FollowPath = false;
	
	
	
};
