// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nave_Lab_SIS457/Public/SwarmManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmManager() {}
// Cross Module References
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_ASwarmManager_NoRegister();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_ASwarmManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nave_Lab_SIS457();
// End Cross Module References
	void ASwarmManager::StaticRegisterNativesASwarmManager()
	{
	}
	UClass* Z_Construct_UClass_ASwarmManager_NoRegister()
	{
		return ASwarmManager::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nave_Lab_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwarmManager.h" },
		{ "ModuleRelativePath", "Public/SwarmManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwarmManager_Statics::ClassParams = {
		&ASwarmManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwarmManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwarmManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwarmManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwarmManager, 2172370551);
	template<> NAVE_LAB_SIS457_API UClass* StaticClass<ASwarmManager>()
	{
		return ASwarmManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwarmManager(Z_Construct_UClass_ASwarmManager, &ASwarmManager::StaticClass, TEXT("/Script/Nave_Lab_SIS457"), TEXT("ASwarmManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
