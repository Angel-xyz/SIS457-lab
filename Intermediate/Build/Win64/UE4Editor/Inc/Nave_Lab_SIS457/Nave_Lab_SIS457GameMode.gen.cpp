// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nave_Lab_SIS457/Nave_Lab_SIS457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Lab_SIS457GameMode() {}
// Cross Module References
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_ANave_Lab_SIS457GameMode_NoRegister();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_ANave_Lab_SIS457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Nave_Lab_SIS457();
// End Cross Module References
	void ANave_Lab_SIS457GameMode::StaticRegisterNativesANave_Lab_SIS457GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANave_Lab_SIS457GameMode_NoRegister()
	{
		return ANave_Lab_SIS457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Nave_Lab_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Nave_Lab_SIS457GameMode.h" },
		{ "ModuleRelativePath", "Nave_Lab_SIS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Lab_SIS457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::ClassParams = {
		&ANave_Lab_SIS457GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Lab_SIS457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Lab_SIS457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Lab_SIS457GameMode, 2556964213);
	template<> NAVE_LAB_SIS457_API UClass* StaticClass<ANave_Lab_SIS457GameMode>()
	{
		return ANave_Lab_SIS457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Lab_SIS457GameMode(Z_Construct_UClass_ANave_Lab_SIS457GameMode, &ANave_Lab_SIS457GameMode::StaticClass, TEXT("/Script/Nave_Lab_SIS457"), TEXT("ANave_Lab_SIS457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Lab_SIS457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
