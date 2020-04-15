#include "TestHarness.h"
#include "CommandLineTestRunner.h"
#include "MockExpectedCall.h"
#include "MockSupport.h"
#include <iostream>
#include "LedDriverMock.h"
#include "blinky.h"

TEST_GROUP(BlinkyStart)
{
    void setup()
    {
    }
    void teardown()
    {
        mock().clear();
    }
};

TEST(BlinkyStart, testStartFunction)
{
    bool is_false = true, is_true = false;
    // Instantiate objects
    LedDriverMock ledDriverMock;
    Blinky blinky(ledDriverMock);

    is_false = blinky.isStarted();
    CHECK_EQUAL(is_false, false);

    // Under test
    blinky.start();

    is_true = blinky.isStarted();
    CHECK_EQUAL(is_true, true);
}
