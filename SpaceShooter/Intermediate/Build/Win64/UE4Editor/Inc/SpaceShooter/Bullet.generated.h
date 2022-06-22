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
#ifdef SPACESHOOTER_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define SPACESHOOTER_Bullet_generated_h

#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulletMesh() { return STRUCT_OFFSET(ABullet, bulletMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ABullet, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__movementSpeed() { return STRUCT_OFFSET(ABullet, movementSpeed); }


#define SpaceShooter_Source_SpaceShooter_Bullet_h_12_PROLOG
#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_INCLASS \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_Bullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_Bullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
