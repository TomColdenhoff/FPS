// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GameDataLibary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDataLibary() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UGameDataLibary_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGameDataLibary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UFunction_UGameDataLibary_GetGameData();
	FPS_API UClass* Z_Construct_UClass_UGameData_NoRegister();
// End Cross Module References
	void UGameDataLibary::StaticRegisterNativesUGameDataLibary()
	{
		UClass* Class = UGameDataLibary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameData", &UGameDataLibary::execGetGameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameDataLibary_GetGameData()
	{
		struct GameDataLibary_eventGetGameData_Parms
		{
			bool IsValid;
			UGameData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameDataLibary_eventGetGameData_Parms, ReturnValue), Z_Construct_UClass_UGameData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsValid_SetBit = [](void* Obj){ ((GameDataLibary_eventGetGameData_Parms*)Obj)->IsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameDataLibary_eventGetGameData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsValid_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsValid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game Data" },
				{ "ModuleRelativePath", "Public/GameDataLibary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataLibary, "GetGameData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(GameDataLibary_eventGetGameData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameDataLibary_NoRegister()
	{
		return UGameDataLibary::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameDataLibary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_FPS,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameDataLibary_GetGameData, "GetGameData" }, // 3840762222
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameDataLibary.h" },
				{ "ModuleRelativePath", "Public/GameDataLibary.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameDataLibary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameDataLibary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UGameDataLibary, 1701295332);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameDataLibary(Z_Construct_UClass_UGameDataLibary, &UGameDataLibary::StaticClass, TEXT("/Script/FPS"), TEXT("UGameDataLibary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDataLibary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
