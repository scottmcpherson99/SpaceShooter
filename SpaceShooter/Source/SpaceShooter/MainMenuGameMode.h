// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EMainMenuLevel : uint8
{
	EOPENBOX UMETA(DisplayName = "OpenBox"),
	EFOURBOXES UMETA(DisplayName = "FourBoxes"),
	EFORTRESS UMETA(DisplayName = "Fortress")
};

UENUM(BlueprintType)
enum class EMainMenuWidget : uint8
{
	EMAINMENU UMETA(DisplayName = "MainMenu"),
	EHOWTO UMETA(DisplayName = "HowTo"),
	ECREDITS UMETA(Displayname = "Credits")
};

UCLASS()
class SPACESHOOTER_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainMenuGameMode();

	virtual void BeginPlay() override;

	//start the current level selected
	void StartGame(FName levelName_);

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UMainMenuWidget* mainMenuWidget;

	//widget class to use for our howto screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> HowToHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UHowTo* howToWidget;

	//widget class to use for our howto screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> CreditsHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UCreditsWidget* creditsWidget;

	//switch which map is being selected
	void SwitchMapChoice(EMainMenuLevel mapChoice_);

	//switch the widget that is being shown
	void SwitchWidget(EMainMenuWidget widget_);

	//background music
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* backgroundMusic;

	//timer to repeat the music
	FTimerHandle musicTimer;

	//play the background music
	void PlayMusic();
};
