// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_init() {}
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AAssualtCharacter_FireDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UBaseWeapon_AmmoChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_UpdateOnGroundDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS",
				PKG_CompiledIn | 0x00000000,
				0x50BE2F63,
				0x4993E27B,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
