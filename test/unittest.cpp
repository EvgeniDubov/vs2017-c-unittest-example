#include "stdafx.h"
#include "CppUnitTest.h"

#include "fun.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{		
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestFoo)
		{
			int result = 0;
			
			result = foo(NULL);
			
			Assert::IsTrue(0 == result);
		}

		TEST_METHOD(TestBar)
		{
			double result = 0;
			double coef = 1.1;

			result = bar(NULL, coef);

			Assert::IsTrue(0 == result);
		}
	};
}