#include "CppUnitTest.h"
#include "../Solver/ComplexAnswer.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ComplexAnswerTest
{
	TEST_CLASS(ComplexAnswerTest)
	{
	public:
		TEST_METHOD(ToStringTest)
		{ 
			//arrande
			Complex first(1, 2);
			Complex second(3, 4);
			ComplexAnswer answer(first, second);
			std::string expected = "(1 + 2i)\n(3 + 4i)\n";
			//act
			auto actual = answer.ToString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(getFirstTest)
		{
			Complex first(1, 2);
		}

		TEST_METHOD(getSecondTest)
		{
			Complex second(3, 4);
		}
	};
}