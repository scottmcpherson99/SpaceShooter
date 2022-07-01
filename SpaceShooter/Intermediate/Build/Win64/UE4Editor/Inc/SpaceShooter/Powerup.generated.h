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
#ifdef SPACESHOOTER_Powerup_generated_h
#error "Powerup.generated.h already included, missing '#pragma once' in Powerup.h"
#endif
#define SPACESHOOTER_Powerup_generated_h

#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend struct Z_Construct_UClass_APowerup_Statics; \
public: \
	DECLARE_CLASS(APowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(APowerup)


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend struct Z_Construct_UClass_APowerup_Statics; \
public: \
	DECLARE_CLASS(APowerup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(APowerup)


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public:


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerup)


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__rootComp() { return STRUCT_OFFSET(APowerup, rootComp); } \
	FORCEINLINE static uint32 __PPO__powerupMesh() { return STRUCT_OFFSET(APowerup, powerupMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(APowerup, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__collectionSound() { return STRUCT_OFFSET(APowerup, collectionSound); }


#define SpaceShooter_Source_SpaceShooter_Powerup_h_9_PROLOG
#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_INCLASS \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_Powerup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_Powerup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class APowerup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_Powerup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
