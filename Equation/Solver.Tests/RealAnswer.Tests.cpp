#include "CppUnitTest.h"
#include "../Solver/RealAnswer.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RealAnswerTest
{
	TEST_CLASS(RealAnswerTest)
	{
	public:
		
		TEST_METHOD(ToStringTest)
		{ 
			//arrande
			RealAnswer answer(2, 3);
			std::string expected = "{ 2; 3 }";
			//act
			auto actual = answer.ToString();
			//assert
			Assert::AreEqual(actual, expected);
		}
	};
}