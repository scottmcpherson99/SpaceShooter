// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveScore.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API USaveScore : public USaveGame
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int highScore;
	

public:
	//return the current highscore of the level
	int GetHighScore();

	//set the new highscore for the level
	void SetHighScore(int highScore_);
};
