// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameplayTagContainer.h"
#include "WarriorStructTypes.generated.h"

class UWarriorHeroLinkedAnimLayer;
class UWarriorGameplayAbility;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FwarriorHeroAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ToolTip="InputTag"))
	FGameplayTag InputTag;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UWarriorGameplayAbility> AbilityToGrant;

	bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FWarriorHeroWeaponData
{
 	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Warrior Struct")
	TSubclassOf<UWarriorHeroLinkedAnimLayer> WeaponAnimLayerToLink;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Warrior Struct")
	UInputMappingContext* WeaponInputMappingContext; 
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Warrior Struct")
	TArray<FwarriorHeroAbilitySet> DefaultWeaponAbilities;

	
};