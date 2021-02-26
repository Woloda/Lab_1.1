#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.1/Product.h"
#include "../Lab_1.1/Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab11
{
	TEST_CLASS(UnitTestLab11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Product a;
			a.set_f(200);
			a.set_s(2.3);
			Assert::AreEqual(a.power(), 4600.0);
		}
	};
}
