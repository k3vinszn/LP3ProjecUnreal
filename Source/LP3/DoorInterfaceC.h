// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DoorInterfaceC.generated.h"

/**
 * 
 */

UINTERFACE(MinimalAPI)

class  UDoorInterfaceC : public UInterface
{
    GENERATED_BODY()
};

class LP3_API IDoorInterfaceC
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void OnInteractBPD();
};
