#include "TestHarness.h"
#include "CommandLineTestRunner.h"
#include "MockExpectedCall.h"
#include "MockSupport.h"
#include <iostream>
#include "LedDriverMock.h"
#include "blinky.h"

TEST_GROUP(BlinkyRefresh)
{
    void setup()
    {
    }
    void teardown()
    {
        mock().clear();
    }
};

TEST(BlinkyRefresh, testRefreshFunction)
{
    bool is_false = true, is_true = false;
    // Instantiate objects
    LedDriverMock ledDriverMock;
    Blinky blinky(ledDriverMock);

    // Prepare mock
    mock().expectOneCall("toggle");

    blinky.start();
    for(int i = 0; i < 51; i++)
    {
        blinky.refresh();
    }

    mock().checkExpectations();
}
