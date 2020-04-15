#include "TestHarness.h"
#include "CommandLineTestRunner.h"
#include "MockExpectedCall.h"
#include "MockSupport.h"
#include <iostream>
#include "LedDriverMock.h"
#include "blinky.h"

TEST_GROUP(BlinkyStop)
{
    void setup()
    {
    }
    void teardown()
    {
        mock().clear();
    }
};

TEST(BlinkyStop, testStopFunction)
{
    bool is_false = true, is_true = false;
    // Instantiate objects
    LedDriverMock ledDriverMock;
    Blinky blinky(ledDriverMock);

    blinky.start();
    is_true = blinky.isStarted();
    CHECK_EQUAL(is_true, true);

    // Under test
    blinky.stop();

    is_false = blinky.isStarted();
    CHECK_EQUAL(is_false, false);
}
