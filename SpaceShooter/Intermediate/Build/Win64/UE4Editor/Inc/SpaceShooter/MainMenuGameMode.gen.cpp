// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/MainMenuGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}
// Cross Module References
	SPACESHOOTER_API UEnum* Z_Construct_UEnum_SpaceShooter_EMainMenuWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
	SPACESHOOTER_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_AMainMenuGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static UEnum* EMainMenuWidget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpaceShooter_EMainMenuWidget, Z_Construct_UPackage__Script_SpaceShooter(), TEXT("EMainMenuWidget"));
		}
		return Singleton;
	}
	template<> SPACESHOOTER_API UEnum* StaticEnum<EMainMenuWidget>()
	{
		return EMainMenuWidget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuWidget(EMainMenuWidget_StaticEnum, TEXT("/Script/SpaceShooter"), TEXT("EMainMenuWidget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpaceShooter_EMainMenuWidget_Hash() { return 3349284961U; }
	UEnum* Z_Construct_UEnum_SpaceShooter_EMainMenuWidget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpaceShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuWidget"), 0, Get_Z_Construct_UEnum_SpaceShooter_EMainMenuWidget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuWidget::EOPENBOX", (int64)EMainMenuWidget::EOPENBOX },
				{ "EMainMenuWidget::EFOURBOXES", (int64)EMainMenuWidget::EFOURBOXES },
				{ "EMainMenuWidget::EFORTRESS", (int64)EMainMenuWidget::EFORTRESS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "EFORTRESS.Comment", "/**\n * \n */" },
				{ "EFORTRESS.DisplayName", "Fortress" },
				{ "EFORTRESS.Name", "EMainMenuWidget::EFORTRESS" },
				{ "EFOURBOXES.Comment", "/**\n * \n */" },
				{ "EFOURBOXES.DisplayName", "FourBoxes" },
				{ "EFOURBOXES.Name", "EMainMenuWidget::EFOURBOXES" },
				{ "EOPENBOX.Comment", "/**\n * \n */" },
				{ "EOPENBOX.DisplayName", "OpenBox" },
				{ "EOPENBOX.Name", "EMainMenuWidget::EOPENBOX" },
				{ "ModuleRelativePath", "MainMenuGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpaceShooter,
				nullptr,
				"EMainMenuWidget",
				"EMainMenuWidget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
	{
		return AMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backgroundMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backgroundMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuGameMode.h" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_MainMenuHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_MainMenuHUDWidget = { "MainMenuHUDWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameMode, MainMenuHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_MainMenuHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_MainMenuHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_mainMenuWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_mainMenuWidget = { "mainMenuWidget", nullptr, (EPropertyFlags)0x00100000000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameMode, mainMenuWidget), Z_Construct_UClass_UMainMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_mainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_mainMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_backgroundMusic_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "//background music\n" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ToolTip", "background music" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_backgroundMusic = { "backgroundMusic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameMode, backgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_backgroundMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_backgroundMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_MainMenuHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_mainMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_backgroundMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
		&AMainMenuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuGameMode, 361397711);
	template<> SPACESHOOTER_API UClass* StaticClass<AMainMenuGameMode>()
	{
		return AMainMenuGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuGameMode(Z_Construct_UClass_AMainMenuGameMode, &AMainMenuGameMode::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("AMainMenuGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
