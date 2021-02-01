#include <falculator.h>

#include <cxxtest/TestSuite.h>

class SampleTest : public CxxTest::TestSuite
{
public:
    void testSample()
    {
        TS_ASSERT_EQUALS(42, falculator_is_working());
        TS_ASSERT_EQUALS(1, falculator_is_working(1));
    }
};
