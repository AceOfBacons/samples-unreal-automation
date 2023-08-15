// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"

UCustomGameInstance::UCustomGameInstance()
{
	RecordingName = "MyReplay";
	FriendlyRecordingName = "My Replay";
}

void UCustomGameInstance::StartRecording()
{
	//Start recording
	StartRecordingReplay(RecordingName, FriendlyRecordingName); //By leaving URL parameters empty, it will default to the local file streamer
}

void UCustomGameInstance::StopRecording()
{
	StopRecordingReplay();
}

void UCustomGameInstance::StartReplay()
{
	PlayReplay(RecordingName, nullptr);
}