// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ModuleTwoAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMyAsyncActionDelegate);

/**
 * 
 */
UCLASS()
class MODULETWO_API UModuleTwoAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FMyAsyncActionDelegate OnCompleted;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
	static UModuleTwoAction* MyAsyncFunction();

	virtual void Activate() override;
    
private:
	void AsyncTask();
};
