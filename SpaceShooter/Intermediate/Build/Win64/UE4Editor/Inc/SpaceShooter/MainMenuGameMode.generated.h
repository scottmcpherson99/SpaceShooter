// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOTER_MainMenuGameMode_generated_h
#error "MainMenuGameMode.generated.h already included, missing '#pragma once' in MainMenuGameMode.h"
#endif
#define SPACESHOOTER_MainMenuGameMode_generated_h

#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_SPARSE_DATA
#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_RPC_WRAPPERS
#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuGameMode(); \
	friend struct Z_Construct_UClass_AMainMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameMode)


#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuGameMode(); \
	friend struct Z_Construct_UClass_AMainMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShooter"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameMode)


#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameMode(AMainMenuGameMode&&); \
	NO_API AMainMenuGameMode(const AMainMenuGameMode&); \
public:


#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameMode(AMainMenuGameMode&&); \
	NO_API AMainMenuGameMode(const AMainMenuGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuGameMode)


#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_PRIVATE_PROPERTY_OFFSET
#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_21_PROLOG
#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_RPC_WRAPPERS \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_INCLASS \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_SPARSE_DATA \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_INCLASS_NO_PURE_DECLS \
	SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOTER_API UClass* StaticClass<class AMainMenuGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceShooter_Source_SpaceShooter_MainMenuGameMode_h


#define FOREACH_ENUM_EMAINMENUWIDGET(op) \
	op(EMainMenuWidget::EOPENBOX) \
	op(EMainMenuWidget::EFOURBOXES) \
	op(EMainMenuWidget::EFORTRESS) 

enum class EMainMenuWidget : uint8;
template<> SPACESHOOTER_API UEnum* StaticEnum<EMainMenuWidget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
