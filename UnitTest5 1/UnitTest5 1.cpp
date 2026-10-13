#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double f(const double a) {
    return (a * a + 1) / (sin(a) * sin(a) + 1);
}

namespace UnitTest51
{
    TEST_CLASS(UnitTest51)
    {
    public:

        TEST_METHOD(TestFunctionF)
        {
            double expected = 1.0;
            double actual = f(0.0);

            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}