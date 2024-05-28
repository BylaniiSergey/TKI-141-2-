#include "pch.h"
#include "CppUnitTest.h"
#include "../Solver/MyLinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTest
{
	TEST_CLASS(SolverTest)
	{
	public:
		
		TEST_METHOD(Empty_Numbers_True)
		{
			MyLinkedList list;
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(ToString_Numbers_Success)
		{
			//arrande
			MyLinkedList list{ 1, 2, 3, 4, 5 };
			std::string expected = "1 2 3 4 5 ";

			//act
			auto actual = list.toString();

			//assert
			Assert::AreEqual(actual, expected);
		}
		
		TEST_METHOD(TestPushBack_Numbers_Success)
		{
			//arrande
			MyLinkedList list{ 1, 2, 3, 4, 5 };
			list.push_back(5);
			std::string expected = "1 2 3 4 5 5 ";
			//act
			auto actual = list.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(TestPushFront_Numbers_Success)
		{
			//arrande
			MyLinkedList list{ 1, 2, 3, 4, 5 };
			list.push_front(10);
			std::string expected = "10 1 2 3 4 5 ";
			//act
			auto actual = list.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(TestPopFront_Numbers_True)
		{
			// Добавляем элемент в список
			MyLinkedList list;
			list.push_back(5); 

			// Проверяем, что список не пустой перед удалением
			Assert::IsFalse(list.isEmpty());

			// Удаляем первый элемент
			list.pop_front(); 

			// Проверяем, что первый элемент был удален
			Assert::IsTrue(list.isEmpty()); 
		}
		
		TEST_METHOD(TestInsert_Numbers_Success)
		{
			//arrande
			MyLinkedList list{ 1, 2, 3, 4, 5 };
			list.insert(1, 3);
			std::string expected = "1 3 2 3 4 5 ";
			//act
			auto actual = list.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}
		
		TEST_METHOD(Remove_Numbers_Success)
		{
			//arrande
			MyLinkedList list1{ 1, 2, 3, 4, 5 };
			list1.remove(1);
			std::string expected = "1 3 4 5 ";
			//act
			auto actual = list1.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}
	};
}