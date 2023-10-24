#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1) //правильно
		{
			double a = 2;
			double b = 3;
			double exres = -0.0214935;
			double acres = g(a, b);
			Assert::AreEqual(exres, acres, 1e-7);
		}
		TEST_METHOD(TestMethod2) //не правильно
		{
			double a = 2;
			double b = 3;
			double exres = -0.021674935;
			double acres = g(a, b);
			Assert::AreEqual(exres, acres, 1e-7);
		}
	};
}