// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionalTests/UIFunctionalTest.h"


AUIFunctionalTest::AUIFunctionalTest()
{
}

BEGIN_DEFINE_SPEC(FAutomationDriverSpec, "Joydrop.TestGroupName", EAutomationTestFlags::ProductFilter | EAutomationTestFlags::ApplicationContextMask)
FAutomationDriverPtr Driver = IAutomationDriverModule::Get().CreateDriver();
FDriverElementRef PlayButton = Driver->FindElement(By::Id("PlayButton"));
AFunctionalTest* FTTest;
END_DEFINE_SPEC(FAutomationDriverSpec)
void FAutomationDriverSpec::Define()
{
    Describe("UIButtonTest()", [this]()
        {
            BeforeEach([this]()
                {
                    // Any setup should go here.
                    if (IAutomationDriverModule::Get().IsEnabled())
                    {
                        IAutomationDriverModule::Get().Disable();
                    }
                    IAutomationDriverModule::Get().Enable();
                    
                });

            It("should return true when successful", [this]()
                { 
                    Driver->FindElement(By::Id("Submit"))->Click();
                    Driver->Wait(FTimespan::FromSeconds(2));
                    TestTrue("Execute", true);
                });

            It("should return false when unsuccessful", [this]()
                {
                    TestFalse("Execute", false);
                });

            AfterEach([this]()
                {
                    // Any teardown code should go here.
                });
        });
}




