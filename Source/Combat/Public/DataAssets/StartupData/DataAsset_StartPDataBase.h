// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartPDataBase.generated.h"

class UWarriorGameplayAbility;
/**
 * 
 */
UCLASS()
class COMBAT_API UDataAsset_StartPDataBase : public UDataAsset
{
	GENERATED_BODY()
	
public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartupData")
	TArray<TSubclassOf<UWarriorGameplayAbility>> ActivateOnGiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartupData")
	TArray<TSubclassOf<UWarriorGameplayAbility>> ReativeAbilities;

	void GrandAbilities(const TArray<TSubclassOf<UWarriorGameplayAbility>>& InAbilitiesToGive,  UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

	
};
