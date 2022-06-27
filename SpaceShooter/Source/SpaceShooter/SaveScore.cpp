// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveScore.h"

int USaveScore::GetHighScore()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Recieved high score")));
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::FormatAsNumber(highScore));

	return highScore;
}

void USaveScore::SetHighScore(int highScore_)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("High score should be set")));

	highScore = highScore_;
}
