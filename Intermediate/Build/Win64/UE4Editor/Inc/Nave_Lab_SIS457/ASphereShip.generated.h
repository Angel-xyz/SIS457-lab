// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVE_LAB_SIS457_ASphereShip_generated_h
#error "ASphereShip.generated.h already included, missing '#pragma once' in ASphereShip.h"
#endif
#define NAVE_LAB_SIS457_ASphereShip_generated_h

#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_SPARSE_DATA
#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_RPC_WRAPPERS
#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASphereShip(); \
	friend struct Z_Construct_UClass_AASphereShip_Statics; \
public: \
	DECLARE_CLASS(AASphereShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nave_Lab_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AASphereShip)


#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAASphereShip(); \
	friend struct Z_Construct_UClass_AASphereShip_Statics; \
public: \
	DECLARE_CLASS(AASphereShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nave_Lab_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AASphereShip)


#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASphereShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASphereShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASphereShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASphereShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASphereShip(AASphereShip&&); \
	NO_API AASphereShip(const AASphereShip&); \
public:


#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASphereShip(AASphereShip&&); \
	NO_API AASphereShip(const AASphereShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASphereShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASphereShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASphereShip)


#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_PRIVATE_PROPERTY_OFFSET
#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_19_PROLOG
#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_PRIVATE_PROPERTY_OFFSET \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_SPARSE_DATA \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_RPC_WRAPPERS \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_INCLASS \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_PRIVATE_PROPERTY_OFFSET \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_SPARSE_DATA \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_INCLASS_NO_PURE_DECLS \
	Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVE_LAB_SIS457_API UClass* StaticClass<class AASphereShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nave_Lab_SIS457_Source_Nave_Lab_SIS457_ASphereShip_h


#define FOREACH_ENUM_EORCHESTSTATE(op) \
	op(EOrchestState::RandomMovement) \
	op(EOrchestState::FormingCircle) \
	op(EOrchestState::PauseAndSpin) \
	op(EOrchestState::Converging) \
	op(EOrchestState::StarAndYingYang) 

enum class EOrchestState : uint8;
template<> NAVE_LAB_SIS457_API UEnum* StaticEnum<EOrchestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
