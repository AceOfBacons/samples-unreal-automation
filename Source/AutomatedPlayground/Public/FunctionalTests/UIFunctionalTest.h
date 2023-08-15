// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "AutomationDriverCommon.h"
#include "IAutomationDriverModule.h"
#include "IAutomationDriver.h"
#include "AutomationDriverTypeDefs.h"
#include "DriverConfiguration.h"
#include "IDriverSequence.h"
#include "IDriverElement.h"
#include "IElementLocator.h"

#include <LocateBy.h>
#include <WaitUntil.h>

#include "UIFunctionalTest.generated.h"



/**
 * 
 */
UCLASS()
class AUTOMATEDPLAYGROUND_API AUIFunctionalTest : public AFunctionalTest
{
	GENERATED_BODY()

public:
	AUIFunctionalTest();

	
};
