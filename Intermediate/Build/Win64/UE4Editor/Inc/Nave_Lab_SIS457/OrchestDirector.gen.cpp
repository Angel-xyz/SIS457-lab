// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nave_Lab_SIS457/Public/OrchestDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrchestDirector() {}
// Cross Module References
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_AOrchestDirector_NoRegister();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_AOrchestDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nave_Lab_SIS457();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_AASphereShip_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOrchestDirector::execResetOrchestra)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOrchestra();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOrchestDirector::execStartStarYingYang)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStarYingYang();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOrchestDirector::execStartConverging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConverging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOrchestDirector::execStartSpinning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpinning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOrchestDirector::execStartCircleFormation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCircleFormation();
		P_NATIVE_END;
	}
	void AOrchestDirector::StaticRegisterNativesAOrchestDirector()
	{
		UClass* Class = AOrchestDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetOrchestra", &AOrchestDirector::execResetOrchestra },
			{ "StartCircleFormation", &AOrchestDirector::execStartCircleFormation },
			{ "StartConverging", &AOrchestDirector::execStartConverging },
			{ "StartSpinning", &AOrchestDirector::execStartSpinning },
			{ "StartStarYingYang", &AOrchestDirector::execStartStarYingYang },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrchestDirector, nullptr, "ResetOrchestra", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrchestDirector_ResetOrchestra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrchestDirector_ResetOrchestra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrchestDirector, nullptr, "StartCircleFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrchestDirector_StartCircleFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrchestDirector_StartCircleFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrchestDirector, nullptr, "StartConverging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrchestDirector_StartConverging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrchestDirector_StartConverging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrchestDirector, nullptr, "StartSpinning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrchestDirector_StartSpinning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrchestDirector_StartSpinning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrchestDirector, nullptr, "StartStarYingYang", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrchestDirector_StartStarYingYang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrchestDirector_StartStarYingYang_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOrchestDirector_NoRegister()
	{
		return AOrchestDirector::StaticClass();
	}
	struct Z_Construct_UClass_AOrchestDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipClasstoSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShipClasstoSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfShips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfShips;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fleet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fleet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fleet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrchestDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nave_Lab_SIS457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOrchestDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrchestDirector_ResetOrchestra, "ResetOrchestra" }, // 2989016627
		{ &Z_Construct_UFunction_AOrchestDirector_StartCircleFormation, "StartCircleFormation" }, // 3096213515
		{ &Z_Construct_UFunction_AOrchestDirector_StartConverging, "StartConverging" }, // 27470146
		{ &Z_Construct_UFunction_AOrchestDirector_StartSpinning, "StartSpinning" }, // 652759419
		{ &Z_Construct_UFunction_AOrchestDirector_StartStarYingYang, "StartStarYingYang" }, // 2761968459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrchestDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OrchestDirector.h" },
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrchestDirector_Statics::NewProp_ShipClasstoSpawn_MetaData[] = {
		{ "Category", "Orchestra Config" },
		{ "Comment", "// Called every frame\n" },
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrchestDirector_Statics::NewProp_ShipClasstoSpawn = { "ShipClasstoSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrchestDirector, ShipClasstoSpawn), Z_Construct_UClass_AASphereShip_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_ShipClasstoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_ShipClasstoSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrchestDirector_Statics::NewProp_NumberOfShips_MetaData[] = {
		{ "Category", "Orchestra Config" },
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOrchestDirector_Statics::NewProp_NumberOfShips = { "NumberOfShips", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrchestDirector, NumberOfShips), METADATA_PARAMS(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_NumberOfShips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_NumberOfShips_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet_Inner = { "Fleet", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AASphereShip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet_MetaData[] = {
		{ "Category", "Orchestra Config" },
		{ "ModuleRelativePath", "Public/OrchestDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet = { "Fleet", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrchestDirector, Fleet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrchestDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrchestDirector_Statics::NewProp_ShipClasstoSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrchestDirector_Statics::NewProp_NumberOfShips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrchestDirector_Statics::NewProp_Fleet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrchestDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrchestDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrchestDirector_Statics::ClassParams = {
		&AOrchestDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOrchestDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrchestDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrchestDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrchestDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrchestDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrchestDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrchestDirector, 2253431652);
	template<> NAVE_LAB_SIS457_API UClass* StaticClass<AOrchestDirector>()
	{
		return AOrchestDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrchestDirector(Z_Construct_UClass_AOrchestDirector, &AOrchestDirector::StaticClass, TEXT("/Script/Nave_Lab_SIS457"), TEXT("AOrchestDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrchestDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
