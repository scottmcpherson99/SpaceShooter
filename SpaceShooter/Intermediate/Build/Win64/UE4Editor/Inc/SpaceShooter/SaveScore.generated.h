// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_SaveScore_generated_h
#error "SaveScore.generated.h already included, missing '#pragma once' in SaveScore.h"
#endif
#define SPACESHOOTER_SaveScore_generated_h

#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_RPC_WRAPPERS
#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveScore(); \
	friend struct Z_Construct_UClass_USaveScore_Statics; \
public: \
	DECLARE_CLASS(USaveScore, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(USaveScore)


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveScore(); \
	friend struct Z_Construct_UClass_USaveScore_Statics; \
public: \
	DECLARE_CLASS(USaveScore, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(USaveScore)


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveScore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveScore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveScore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveScore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveScore(USaveScore&&); \
	NO_API USaveScore(const USaveScore&); \
public:


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveScore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveScore(USaveScore&&); \
	NO_API USaveScore(const USaveScore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveScore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveScore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveScore)


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__highScore() { return STRUCT_OFFSET(USaveScore, highScore); }


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_12_PROLOG
#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_INCLASS \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_SaveScore_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_SaveScore_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class USaveScore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_SaveScore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
