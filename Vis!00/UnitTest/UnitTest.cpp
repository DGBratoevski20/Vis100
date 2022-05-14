#pragma once
#include "pch.h"
#include "../Vis!00/SetupBaseCardsPyramid.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(Should_return_true_if_var1_value_is_right)
		{
			// AAA
			// arrange   -   act  -   assert

			// arrange
			int result;


			// act
			result = checkPyramidPositions(725);

			// assert
			Assert::AreEqual(result, L"Expected true!");


		}
		TEST_METHOD(Should_return_true_if_var2_value_is_right)
		{
			int result;
			result = checkPyramidPositions2(830);
			Assert::AreEqual(result, L"Expected true!");
		}
		TEST_METHOD(Test_If_var3_value_is_correct)
		{
			int result;
			result = checkPyramidPositions(540);
			Assert::AreEqual(result, L"Expected true!");
		}
		TEST_METHOD(Should_return_true_if_var4_value_is_right)
		{
			int result;
			result = checkPyramidPositions3(670);
			Assert::AreEqual(result, L"Expected true!");
		}
		TEST_METHOD(Should_return_true_if_var5_value_is_right)
		{
			int result;
			result = checkPyramidPositions4(640);
			Assert::AreEqual(result, L"Expected true!");
		}
		
		TEST_METHOD(Should_return_false_if_var6_value_is_not_right)
		{
			int result;
			result = checkPyramidPositions5(6);
			Assert::AreNotEqual(result, L"Expected false!");
		}
	};
}
