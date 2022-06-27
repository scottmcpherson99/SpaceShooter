// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooter/GameScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameScreenWidget() {}
// Cross Module References
	SPACESHOOTER_API UClass* Z_Construct_UClass_UGameScreenWidget_NoRegister();
	SPACESHOOTER_API UClass* Z_Construct_UClass_UGameScreenWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceShooter();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UGameScreenWidget::StaticRegisterNativesUGameScreenWidget()
	{
	}
	UClass* Z_Construct_UClass_UGameScreenWidget_NoRegister()
	{
		return UGameScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHighScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHighScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameScreenWidget.h" },
		{ "ModuleRelativePath", "GameScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenWidget" },
		{ "Comment", "//the players score\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenWidget.h" },
		{ "ToolTip", "the players score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenWidget, PlayerScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHighScore_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenWidget" },
		{ "Comment", "//the players highscore\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenWidget.h" },
		{ "ToolTip", "the players highscore" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHighScore = { "PlayerHighScore", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenWidget, PlayerHighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHighScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenWidget" },
		{ "Comment", "//the players health\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenWidget.h" },
		{ "ToolTip", "the players health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenWidget, PlayerHealth), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHighScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenWidget_Statics::NewProp_PlayerHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameScreenWidget_Statics::ClassParams = {
		&UGameScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameScreenWidget, 1999157516);
	template<> SPACESHOOTER_API UClass* StaticClass<UGameScreenWidget>()
	{
		return UGameScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameScreenWidget(Z_Construct_UClass_UGameScreenWidget, &UGameScreenWidget::StaticClass, TEXT("/Script/SpaceShooter"), TEXT("UGameScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
