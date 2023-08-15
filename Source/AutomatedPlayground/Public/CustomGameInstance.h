// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMATEDPLAYGROUND_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UCustomGameInstance();

	//Name that we are saving our recording under
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString RecordingName;

	//Display Name (UI)
	UPROPERTY(EditDefaultsOnly, Category = "Replays")
		FString FriendlyRecordingName;

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Replays")
		void StartReplay();
	
};
