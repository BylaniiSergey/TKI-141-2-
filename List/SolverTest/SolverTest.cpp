/**
#include "pch.h"
#include "CppUnitTest.h"
#include "../Solver/LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTest
{
	TEST_CLASS(SolverTest)
	{
	public:
		
		TEST_METHOD(Empty_Numbers_True)
		{
			LinkedList list;
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(ToString_Numbers_Success)
		{
			//arrande
			LinkedList list{ 1, 2, 3, 4, 5 };
			std::string expected = "1 2 3 4 5 ";

			//act
			auto actual = list.toString();

			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(Removing_Elements_Success)
		{
			//arrande
			LinkedList list{ 1, 2, 3, 4, 5 };
			list.operator>>(1);
			std::string expected = "2 3 4 5 ";
			//act
			auto actual = list.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}
		
		TEST_METHOD(Addinge_Elements_Success)
		{
			//arrande
			LinkedList list1{ 1, 2, 3, 4, 5 };
			list1.operator<<(1);
			std::string expected = "1 2 3 4 5 1 ";
			//act
			auto actual = list1.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(Assignment_Operator_Test)
		{
			//arrande
			LinkedList list1;
			list1 << 1 << 2 << 3;
			LinkedList list2;
			list2 = list1;
			std::string expected = "1 2 3 ";
			//act
			auto actual = list2.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}
	};
}
*/