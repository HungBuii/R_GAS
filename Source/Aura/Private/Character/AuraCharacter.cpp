// Copyright by Hung nee


#include "Character/AuraCharacter.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/AuraPlayerState.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 400.0f, 0.0f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void AAuraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void AAuraCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void AAuraCharacter::InitAbilityActorInfo()
{
	// AAuraPlayerState* AuraPlayerState = GetPlayerState<AAuraPlayerState>();
	// check(AuraPlayerState);
	
	// AuraPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(AuraPlayerState, this);
	//
	// AttributeSet = AuraPlayerState->GetAttributeSet();
}


