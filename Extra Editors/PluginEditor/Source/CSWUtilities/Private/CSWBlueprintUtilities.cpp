// Fill out your copyright notice in the Description page of Project Settings.

#include "CSWBlueprintUtilities.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

void UCSWBlueprintUtilities::GetAllActorsWithComponent(const UObject* WorldContextObject, const TSubclassOf<UActorComponent> Component, TArray<AActor*>& OutActors, TArray<UActorComponent*>& OutActorComponents)
{
	if (!Component || !WorldContextObject)
		return;

	OutActors.Empty();
	OutActorComponents.Empty();

	UWorld* world = GEngine->GetWorldFromContextObject(WorldContextObject);

	if (Component && world)
	{
		for (FActorIterator It(world); It; ++It)
		{
			AActor* Actor = *It;
			UActorComponent* ActorComponent = Actor->GetComponentByClass(Component);
			if (Actor && !Actor->IsPendingKill() && ActorComponent)
			{
				OutActors.Add(Actor);
				OutActorComponents.Add(ActorComponent);
			}
		}
	}

}


