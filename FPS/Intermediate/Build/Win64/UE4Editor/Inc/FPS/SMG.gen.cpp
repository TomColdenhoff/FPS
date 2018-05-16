// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMG() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_USMG_NoRegister();
	FPS_API UClass* Z_Construct_UClass_USMG();
	FPS_API UClass* Z_Construct_UClass_UBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UFunction_USMG_FireBullet();
// End Cross Module References
	void USMG::StaticRegisterNativesUSMG()
	{
		UClass* Class = USMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireBullet", &USMG::execFireBullet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USMG_FireBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SMG.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USMG, "FireBullet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMG_NoRegister()
	{
		return USMG::StaticClass();
	}
	UClass* Z_Construct_UClass_USMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBaseWeapon,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USMG_FireBullet, "FireBullet" }, // 2869470476
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Object Mobility Trigger" },
				{ "IncludePath", "SMG.h" },
				{ "ModuleRelativePath", "SMG.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USMG>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USMG::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMG, 2977430873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMG(Z_Construct_UClass_USMG, &USMG::StaticClass, TEXT("/Script/FPS"), TEXT("USMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
