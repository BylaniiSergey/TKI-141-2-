#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ComplexAnswerTest
{
	TEST_CLASS(MyLinkedList)
	{
	public:
		TEST_METHOD(ToStringTest)
		{
			//arrande
			MyLinkedList list;
			list.MyLinkedList(1);
			list.append(2);
			list.append(3);
			std::string value = " 1 ";
			//act
			auto actual = answer.ToString();
			//assert
			Assert::AreEqual(actual, expected);
			auto actual = answer.ToString();
			//assert
			Assert::AreEqual(actual, expected);

		}
	};
}

