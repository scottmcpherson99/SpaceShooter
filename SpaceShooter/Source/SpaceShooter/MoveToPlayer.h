// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MoveToPlayer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SPACESHOOTER_API UMoveToPlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UMoveToPlayer(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory);

};
