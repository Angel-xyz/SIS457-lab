// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nave_Lab_SIS457/ASphereShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASphereShip() {}
// Cross Module References
	NAVE_LAB_SIS457_API UEnum* Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState();
	UPackage* Z_Construct_UPackage__Script_Nave_Lab_SIS457();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_AASphereShip_NoRegister();
	NAVE_LAB_SIS457_API UClass* Z_Construct_UClass_AASphereShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	static UEnum* EOrchestState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState, Z_Construct_UPackage__Script_Nave_Lab_SIS457(), TEXT("EOrchestState"));
		}
		return Singleton;
	}
	template<> NAVE_LAB_SIS457_API UEnum* StaticEnum<EOrchestState>()
	{
		return EOrchestState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrchestState(EOrchestState_StaticEnum, TEXT("/Script/Nave_Lab_SIS457"), TEXT("EOrchestState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState_Hash() { return 214113409U; }
	UEnum* Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Nave_Lab_SIS457();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrchestState"), 0, Get_Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrchestState::RandomMovement", (int64)EOrchestState::RandomMovement },
				{ "EOrchestState::FormingCircle", (int64)EOrchestState::FormingCircle },
				{ "EOrchestState::PauseAndSpin", (int64)EOrchestState::PauseAndSpin },
				{ "EOrchestState::Converging", (int64)EOrchestState::Converging },
				{ "EOrchestState::StarAndYingYang", (int64)EOrchestState::StarAndYingYang },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Converging.DisplayName", "Convergiendo al Centro" },
				{ "Converging.Name", "EOrchestState::Converging" },
				{ "FormingCircle.DisplayName", "Formando el C?rculo" },
				{ "FormingCircle.Name", "EOrchestState::FormingCircle" },
				{ "ModuleRelativePath", "ASphereShip.h" },
				{ "PauseAndSpin.DisplayName", "Pausando y Girando" },
				{ "PauseAndSpin.Name", "EOrchestState::PauseAndSpin" },
				{ "RandomMovement.DisplayName", "Movimiento Aleatorio" },
				{ "RandomMovement.Name", "EOrchestState::RandomMovement" },
				{ "StarAndYingYang.DisplayName", "Estrella y Yin Yang" },
				{ "StarAndYingYang.Name", "EOrchestState::StarAndYingYang" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Nave_Lab_SIS457,
				nullptr,
				"EOrchestState",
				"EOrchestState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AASphereShip::StaticRegisterNativesAASphereShip()
	{
	}
	UClass* Z_Construct_UClass_AASphereShip_NoRegister()
	{
		return AASphereShip::StaticClass();
	}
	struct Z_Construct_UClass_AASphereShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMinimoX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMinimoX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMaximoX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMaximoX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMinimoY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMinimoY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMaximoY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMaximoY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASphereShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Nave_Lab_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ASphereShip.h" },
		{ "ModuleRelativePath", "ASphereShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Le asignamos un cuerpo a la nave, esfera en este caso\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ASphereShip.h" },
		{ "ToolTip", "Le asignamos un cuerpo a la nave, esfera en este caso" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_SphereMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Por defecto de Unreal, le d? f?sicas a la nave ideales para nuestro caso\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ASphereShip.h" },
		{ "ToolTip", "Por defecto de Unreal, le d? f?sicas a la nave ideales para nuestro caso" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, MovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "Comment", "// Proverbial Cerebro, EditAnywhere nos permitir? modificarlo desde el editor\n" },
		{ "ModuleRelativePath", "ASphereShip.h" },
		{ "ToolTip", "Proverbial Cerebro, EditAnywhere nos permitir? modificarlo desde el editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "Comment", "// Nos permitir? saber en que parte de la coreo est? la nave actual\n// Recordar el Enum que definimos al inicio\n" },
		{ "ModuleRelativePath", "ASphereShip.h" },
		{ "ToolTip", "Nos permitir? saber en que parte de la coreo est? la nave actual\nRecordar el Enum que definimos al inicio" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, CurrentState), Z_Construct_UEnum_Nave_Lab_SIS457_EOrchestState, METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoX_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "Comment", "// No conozco el l?mite del mundo, por eso el EditAnywhere, para que podamos modificarlo desde el editor\n" },
		{ "ModuleRelativePath", "ASphereShip.h" },
		{ "ToolTip", "No conozco el l?mite del mundo, por eso el EditAnywhere, para que podamos modificarlo desde el editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoX = { "RangoMinimoX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, RangoMinimoX), METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoX_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "ModuleRelativePath", "ASphereShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoX = { "RangoMaximoX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, RangoMaximoX), METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoY_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "ModuleRelativePath", "ASphereShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoY = { "RangoMinimoY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, RangoMinimoY), METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoY_MetaData[] = {
		{ "Category", "Configuracion Coreo" },
		{ "ModuleRelativePath", "ASphereShip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoY = { "RangoMaximoY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASphereShip, RangoMaximoY), METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASphereShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_SphereMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMinimoY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASphereShip_Statics::NewProp_RangoMaximoY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASphereShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASphereShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AASphereShip_Statics::ClassParams = {
		&AASphereShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AASphereShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AASphereShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASphereShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASphereShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AASphereShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AASphereShip, 3423880332);
	template<> NAVE_LAB_SIS457_API UClass* StaticClass<AASphereShip>()
	{
		return AASphereShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AASphereShip(Z_Construct_UClass_AASphereShip, &AASphereShip::StaticClass, TEXT("/Script/Nave_Lab_SIS457"), TEXT("AASphereShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASphereShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
