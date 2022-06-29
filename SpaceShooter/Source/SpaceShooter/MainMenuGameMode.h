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
	EOPENBOX UMETA(DisplayName = "OpenBox"),
	EFOURBOXES UMETA(DisplayName = "FourBoxes"),
	EFORTRESS UMETA(DisplayName = "Fortress")
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

	//switch which map is being selected
	void SwitchMapChoice(EMainMenuWidget mapChoice_);

	//background music
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* backgroundMusic;

	//timer to repeat the music
	FTimerHandle musicTimer;

	//play the background music
	void PlayMusic();
};
