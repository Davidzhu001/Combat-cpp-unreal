// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/WarriorWeaponBase.h"
#include "WarriorTypes/WarriorStructTypes.h"
#include "WarriorHeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API AWarriorHeroWeapon : public AWarriorWeaponBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="WeaponData")
	FWarriorHeroWeaponData HeroWeaponData;
	
};
