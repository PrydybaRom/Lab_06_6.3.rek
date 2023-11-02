#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3.rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rek
{
	TEST_CLASS(UnitTest63rek)
	{

		TEST_METHOD(TestMethod1)
		{
			int a = -5;
			int b = 5;
			const int SIZE = 20;

			int arr[SIZE];

			FullArr(arr, SIZE, a, b);
			int sumArr = SumNegativeItem(arr, SIZE, SIZE - 1, 0);

			Assert::AreEqual(sumArr, -18);


		};
	};
};
