// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/SpaceShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShooterGameMode() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_ASpaceShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_UGameScreenWidget_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_USaveScore_NoRegister();
// End Cross Module References
	void ASpaceShooterGameMode::StaticRegisterNativesASpaceShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASpaceShooterGameMode_NoRegister()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_saveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceShooterGameMode.h" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_GameScreenWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_GameScreenWidget = { "GameScreenWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, GameScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_GameScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_GameScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_gameWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_gameWidget = { "gameWidget", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, gameWidget), Z_Construct_UClass_UGameScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_gameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_gameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_saveState_MetaData[] = {
		{ "Category", "Save Game" },
		{ "Comment", "//save game state\n" },
		{ "ModuleRelativePath", "SpaceShooterGameMode.h" },
		{ "ToolTip", "save game state" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_saveState = { "saveState", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShooterGameMode, saveState), Z_Construct_UClass_USaveScore_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_saveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_saveState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_GameScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_gameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShooterGameMode_Statics::NewProp_saveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams = {
		&ASpaceShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceShooterGameMode, 164712557);
	template<> SPACESHOOTER_API UClass* StaticClass<ASpaceShooterGameMode>()
	{
		return ASpaceShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceShooterGameMode(Z_Construct_UClass_ASpaceShooterGameMode, &ASpaceShooterGameMode::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("ASpaceShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
