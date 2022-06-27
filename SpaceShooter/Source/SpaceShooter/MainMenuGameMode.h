// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EMainMenuWidget : uint8
{
	EMAINMENU UMETA(DisplayName = "MainMenu")
};

UCLASS()
class SPACESHOOTER_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainMenuGameMode();

	virtual void BeginPlay() override;

	//start the current level selected
	void StartGame();

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UMainMenuWidget* mainMenuWidget;
};
