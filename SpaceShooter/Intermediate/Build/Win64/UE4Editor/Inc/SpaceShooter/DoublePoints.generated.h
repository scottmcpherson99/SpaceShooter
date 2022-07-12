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
#ifdef SPACESHOOTER_DoublePoints_generated_h
#error "DoublePoints.generated.h already included, missing '#pragma once' in DoublePoints.h"
#endif
#define SPACESHOOTER_DoublePoints_generated_h

#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoublePoints(); \
	friend struct Z_Construct_UClass_ADoublePoints_Statics; \
public: \
	DECLARE_CLASS(ADoublePoints, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ADoublePoints)


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoublePoints(); \
	friend struct Z_Construct_UClass_ADoublePoints_Statics; \
public: \
	DECLARE_CLASS(ADoublePoints, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ADoublePoints)


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoublePoints(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoublePoints) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoublePoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoublePoints); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoublePoints(ADoublePoints&&); \
	NO_API ADoublePoints(const ADoublePoints&); \
public:


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoublePoints(ADoublePoints&&); \
	NO_API ADoublePoints(const ADoublePoints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoublePoints); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoublePoints); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoublePoints)


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__rootComp() { return STRUCT_OFFSET(ADoublePoints, rootComp); } \
	FORCEINLINE static uint32 __PPO__powerupMesh() { return STRUCT_OFFSET(ADoublePoints, powerupMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ADoublePoints, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__collectionSound() { return STRUCT_OFFSET(ADoublePoints, collectionSound); }


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_12_PROLOG
#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_INCLASS \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_DoublePoints_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class ADoublePoints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_DoublePoints_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
