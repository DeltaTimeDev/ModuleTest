// Fill out your copyright notice in the Description page of Project Settings.


#include "ModuleTwoAction.h"

UModuleTwoAction* UModuleTwoAction::MyAsyncFunction()
{
    UModuleTwoAction* Action = NewObject<UModuleTwoAction>();
    return Action;
}

void UModuleTwoAction::Activate()
{
    // Başlangıçta bir zamanlayıcı kullanarak örnek bir async görev başlatıyoruz.
    if (GEngine)
    {
       // GEngine->GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UModuleTwoAction::AsyncTask);
    }
}

void UModuleTwoAction::AsyncTask()
{
    // Async görevinizin kodu buraya gelecek.
    // Görev tamamlandığında OnCompleted yayınlanır.
    OnCompleted.Broadcast();
}