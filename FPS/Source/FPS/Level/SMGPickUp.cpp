// Fill out your copyright notice in the Description page of Project Settings.

#include "SMGPickUp.h"
#include "FPSPlayer.h"
#include "SMG.h"

void ASMGPickUp::ToHands(AFPSPlayer* Player)
{
	Player->AddMainWeapon<USMG>();
}


