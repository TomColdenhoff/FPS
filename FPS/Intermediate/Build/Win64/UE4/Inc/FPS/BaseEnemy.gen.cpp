// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature();
	FPS_API UClass* Z_Construct_UClass_ABaseEnemy();
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature();
	FPS_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UFunction_ABaseEnemy_GetIsAiming();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPS_API UClass* Z_Construct_UClass_UHitAble_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, "DuckDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, "DeathDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, "GunFireDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAiming", &ABaseEnemy::execGetIsAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABaseEnemy_GetIsAiming()
	{
		struct BaseEnemy_eventGetIsAiming_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BaseEnemy_eventGetIsAiming_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseEnemy_eventGetIsAiming_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "Returns if the AI is aiming or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, "GetIsAiming", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseEnemy_eventGetIsAiming_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature, "DeathDelegate__DelegateSignature" }, // 2627706733
				{ &Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature, "DuckDelegate__DelegateSignature" }, // 2265583382
				{ &Z_Construct_UFunction_ABaseEnemy_GetIsAiming, "GetIsAiming" }, // 2002444461
				{ &Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature, "GunFireDelegate__DelegateSignature" }, // 2479748676
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AI/BaseEnemy.h" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDuck_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDuck = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDuck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, OnDuck), Z_Construct_UDelegateFunction_ABaseEnemy_DuckDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnDuck_MetaData, ARRAY_COUNT(NewProp_OnDuck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDeath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, OnDeath), Z_Construct_UDelegateFunction_ABaseEnemy_DeathDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnDeath_MetaData, ARRAY_COUNT(NewProp_OnDeath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFire_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFire = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, OnFire), Z_Construct_UDelegateFunction_ABaseEnemy_GunFireDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFire_MetaData, ARRAY_COUNT(NewProp_OnFire_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The waypoints the AI walks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints = { UE4CodeGen_Private::EPropertyClass::Array, "Waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, Waypoints), METADATA_PARAMS(NewProp_Waypoints_MetaData, ARRAY_COUNT(NewProp_Waypoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "Category", "BaseEnemy" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The Audio Component in front of the weapon of the AI" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000090009, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The blackboard of the AI" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard = { UE4CodeGen_Private::EPropertyClass::Object, "Blackboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, Blackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_Blackboard_MetaData, ARRAY_COUNT(NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The behaviour tree of the AI" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviourTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_BehaviourTree_MetaData, ARRAY_COUNT(NewProp_BehaviourTree_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[] = {
				{ "Category", "BaseEnemy" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The sensing component of the AI" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PawnSensingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000090009, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_PawnSensingComponent_MetaData, ARRAY_COUNT(NewProp_PawnSensingComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontWeaponSocketName_MetaData[] = {
				{ "Category", "BaseEnemy" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrontWeaponSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "FrontWeaponSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, FrontWeaponSocketName), METADATA_PARAMS(NewProp_FrontWeaponSocketName_MetaData, ARRAY_COUNT(NewProp_FrontWeaponSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowsWaypointPath_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "If the enemey is following a waypoint path" },
			};
#endif
			auto NewProp_bFollowsWaypointPath_SetBit = [](void* Obj){ ((ABaseEnemy*)Obj)->bFollowsWaypointPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowsWaypointPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollowsWaypointPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseEnemy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollowsWaypointPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollowsWaypointPath_MetaData, ARRAY_COUNT(NewProp_bFollowsWaypointPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The bullet spread the enemy has" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletSpread = { UE4CodeGen_Private::EPropertyClass::Struct, "BulletSpread", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, BulletSpread), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BulletSpread_MetaData, ARRAY_COUNT(NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletDistance_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The distance of the \"bullet line trace\"" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletDistance = { UE4CodeGen_Private::EPropertyClass::Float, "BulletDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, BulletDistance), METADATA_PARAMS(NewProp_BulletDistance_MetaData, ARRAY_COUNT(NewProp_BulletDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletDamage_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The damage the enemy deals when he hits someting" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletDamage = { UE4CodeGen_Private::EPropertyClass::Float, "BulletDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, BulletDamage), METADATA_PARAMS(NewProp_BulletDamage_MetaData, ARRAY_COUNT(NewProp_BulletDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
				{ "Category", "Shooting" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The fire rate of the enemy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "FireRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, FireRate), METADATA_PARAMS(NewProp_FireRate_MetaData, ARRAY_COUNT(NewProp_FireRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/AI/BaseEnemy.h" },
				{ "ToolTip", "The health of the enemy" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseEnemy, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDuck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDeath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFire,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Waypoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Waypoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blackboard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviourTree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnSensingComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrontWeaponSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollowsWaypointPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletSpread,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BulletDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UHitAble_NoRegister, (int32)VTABLE_OFFSET(ABaseEnemy, IHitAble), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseEnemy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 3589232758);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/FPS"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
