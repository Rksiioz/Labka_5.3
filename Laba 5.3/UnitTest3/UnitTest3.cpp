#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.3/Laba 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = z(3);
			Assert::AreEqual(t, 0.000497751, 0.1);
		}
	};
}
