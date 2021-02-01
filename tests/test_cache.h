#include <cache.h>
#include <number.h>

#include <cxxtest/TestSuite.h>

using namespace falculator;

bool dummy_fn_was_called = false;

Number dummy_fn(Number input)
{
    return Number(input.getValue() * input.getValue());
}

Number dummy_fn_2(Number input)
{
    Number ret = dummy_fn_was_called ? Number(31) : input;
    dummy_fn_was_called = true;
    return ret;
}

Number fib(Number n)
{
    if (n.getValue() == 0)
        return 0;
    if (n.getValue() == 1)
        return 1;

    return cached(&fib, n.getValue() - 1).getValue() + cached(&fib, n.getValue() - 2).getValue();
}

class CacheTest : public CxxTest::TestSuite
{
public:
    void testCacheServesExpectedValue()
    {
        Number n(42);
        Number n_ret = cached(&dummy_fn, n);

        TS_ASSERT_EQUALS(1764, n_ret.getValue());
    }

    void testCache()
    {
        // dirty way to test a cache by calling a function with a side effect
        Number n(42);

        // first step - cache should serve number itself
        Number n_ret_1 = cached(&dummy_fn_2, n);
        TS_ASSERT_EQUALS(42, n_ret_1.getValue());

        // second step - original function should deliver other value now
        Number n_ret_2 = dummy_fn_2(n);
        TS_ASSERT_EQUALS(31, n_ret_2.getValue());

        // third setp - cache should still serve 42
        Number n_ret_3 = cached(&dummy_fn_2, n);
        TS_ASSERT_EQUALS(42, n_ret_3.getValue());
    }

    void testCacheCanHandleLotsOfEntries()
    {
        for (int i = 0; i <= 360000; i++)
        {
            Number n(i);
            TS_ASSERT_EQUALS(i * i, cached(&dummy_fn, n).getValue());
        }
    }

    void testRecursion()
    {
        // Descending order to make sure it's running fast and it
        // does not cache results from previous runs

        int fibs[47] = { 1836311903, 1134903170, 701408733, 433494437, 267914296, 165580141,
                         102334155,  63245986,   39088169,  24157817,  14930352,  9227465,
                         5702887,    3524578,    2178309,   1346269,   832040,    514229,
                         317811,     196418,     121393,    75025,     46368,     28657,
                         17711,      10946,      6765,      4181,      2584,      1597,
                         987,        610,        377,       233,       144,       89,
                         55,         34,         21,        13,        8,         5,
                         3,          2,          1,         1 };

        for (int i = 46; i > 0; i--)
        {
            Number n(i);
            TS_ASSERT_EQUALS(fibs[46 - i], cached(&fib, n).getValue());
        }
    }
};
