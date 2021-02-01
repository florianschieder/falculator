#include <number.h>

#include <cxxtest/TestSuite.h>

class NumberTest : public CxxTest::TestSuite
{
public:
    // TODO: remove this dummy test when `Number` is more than a dummy
    // bucket for an integer value
    void testDummyNumber()
    {
        falculator::Number n(42);
        TS_ASSERT_EQUALS(42, n.getValue());
    }
};
