// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveToPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "EnemyAIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "blackboard_keys.h"

UMoveToPlayer::UMoveToPlayer(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Move To Player");
}
EBTNodeResult::Type UMoveToPlayer::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	//get the player character and the NPC's controller
	ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	auto const cont = Cast<AEnemyAIController>(owner_comp.GetAIOwner());

	cont->MoveToLocation(cont->get_blackboard()->GetValueAsVector(bb_keys::target_location));
	

	

	//finish with success
	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
