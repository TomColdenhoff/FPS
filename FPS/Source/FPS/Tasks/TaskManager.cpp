// Fill out your copyright notice in the Description page of Project Settings.

#include "TaskManager.h"
#include "Tasks/Task.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Public/TimerManager.h"


// Sets default values
ATaskManager::ATaskManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATaskManager::BeginPlay()
{
	Super::BeginPlay();
	
	//Start the first task
	GetWorld()->GetTimerManager().SetTimer(m_TaskTimerHandle, this, &ATaskManager::StartFirstTask, 3.0f, false);
	
}

// Called every frame
void ATaskManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_CurrentTask != nullptr)
	{
		//Update the task information to check if its completed
		if (m_CurrentTask->Update())
		{
			//Call the end behaviour of the task
			m_CurrentTask->OnTaskEnd();
			if (currentIndex < m_Tasks.Num() - 1)
			{
				StartTask(m_Tasks[currentIndex + 1]);
				currentIndex++;
			}
		}
	}

}

void ATaskManager::StartTask(AActor* TaskActor)
{
	ITask* currentTask = Cast<ITask>(TaskActor);

	if (currentTask != nullptr)
	{
		currentTask->OnTaskStart();
		m_CurrentTask = currentTask;
	}

}

void ATaskManager::StartFirstTask()
{
	StartTask(m_Tasks[0]);
}

