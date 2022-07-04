// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SPACESHOOTER_SpeedBoost_generated_h
#error "SpeedBoost.generated.h already included, missing '#pragma once' in SpeedBoost.h"
#endif
#define SPACESHOOTER_SpeedBoost_generated_h

#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedBoost(); \
	friend struct Z_Construct_UClass_ASpeedBoost_Statics; \
public: \
	DECLARE_CLASS(ASpeedBoost, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ASpeedBoost)


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpeedBoost(); \
	friend struct Z_Construct_UClass_ASpeedBoost_Statics; \
public: \
	DECLARE_CLASS(ASpeedBoost, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ASpeedBoost)


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedBoost(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeedBoost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedBoost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedBoost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedBoost(ASpeedBoost&&); \
	NO_API ASpeedBoost(const ASpeedBoost&); \
public:


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedBoost(ASpeedBoost&&); \
	NO_API ASpeedBoost(const ASpeedBoost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedBoost); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedBoost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeedBoost)


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__rootComp() { return STRUCT_OFFSET(ASpeedBoost, rootComp); } \
	FORCEINLINE static uint32 __PPO__powerupMesh() { return STRUCT_OFFSET(ASpeedBoost, powerupMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ASpeedBoost, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__collectionSound() { return STRUCT_OFFSET(ASpeedBoost, collectionSound); }


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_12_PROLOG
#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_INCLASS \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_SpeedBoost_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class ASpeedBoost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_SpeedBoost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
