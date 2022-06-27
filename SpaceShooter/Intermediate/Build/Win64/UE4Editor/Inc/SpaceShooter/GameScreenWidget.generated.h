// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_GameScreenWidget_generated_h
#error "GameScreenWidget.generated.h already included, missing '#pragma once' in GameScreenWidget.h"
#endif
#define SPACESHOOTER_GameScreenWidget_generated_h

#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_RPC_WRAPPERS
#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameScreenWidget(); \
	friend struct Z_Construct_UClass_UGameScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UGameScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UGameScreenWidget)


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameScreenWidget(); \
	friend struct Z_Construct_UClass_UGameScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UGameScreenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(UGameScreenWidget)


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameScreenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameScreenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameScreenWidget(UGameScreenWidget&&); \
	NO_API UGameScreenWidget(const UGameScreenWidget&); \
public:


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameScreenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameScreenWidget(UGameScreenWidget&&); \
	NO_API UGameScreenWidget(const UGameScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameScreenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameScreenWidget)


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerScore() { return STRUCT_OFFSET(UGameScreenWidget, PlayerScore); } \
	FORCEINLINE static uint32 __PPO__PlayerHighScore() { return STRUCT_OFFSET(UGameScreenWidget, PlayerHighScore); } \
	FORCEINLINE static uint32 __PPO__PlayerHealth() { return STRUCT_OFFSET(UGameScreenWidget, PlayerHealth); }


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_13_PROLOG
#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_INCLASS \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_GameScreenWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class UGameScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_GameScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
