#include "TestHarness.h"
#include "CommandLineTestRunner.h"
#include "MockExpectedCall.h"
#include "MockSupport.h"
#include <iostream>
#include "LedDriverMock.h"
#include "blinky.h"

TEST_GROUP(BlinkyInitialState)
{
    void setup()
    {
    }
    void teardown()
    {
        mock().clear();
    }
};

TEST(BlinkyInitialState, testInitialStateIsStop)
{
    bool is_false = true;
    // Instantiate objects
    LedDriverMock ledDriverMock;
    Blinky blinky(ledDriverMock);

    // Under test
    is_false = blinky.isStarted();
    
    CHECK_EQUAL(is_false, false);
}
