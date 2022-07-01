// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define SPACESHOOTER_PlayerCharacter_generated_h

#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_RPC_WRAPPERS
#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APlayerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__rotationSpeed() { return STRUCT_OFFSET(APlayerCharacter, rotationSpeed); } \
	FORCEINLINE static uint32 __PPO__movementSpeed() { return STRUCT_OFFSET(APlayerCharacter, movementSpeed); } \
	FORCEINLINE static uint32 __PPO__rotationValue() { return STRUCT_OFFSET(APlayerCharacter, rotationValue); } \
	FORCEINLINE static uint32 __PPO__shootSound() { return STRUCT_OFFSET(APlayerCharacter, shootSound); }


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_20_PROLOG
#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_INCLASS \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_PlayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_PlayerCharacter_h


#define FOREACH_ENUM_EPLAYERPOWERUP(op) \
	op(EPlayerPowerup::ENOPOWERUP) \
	op(EPlayerPowerup::ESPEEDBOOST) 

enum class EPlayerPowerup : uint8;
template<> SPACESHOOTER_API UEnum* StaticEnum<EPlayerPowerup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
