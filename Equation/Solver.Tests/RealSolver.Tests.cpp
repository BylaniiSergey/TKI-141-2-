#include "CppUnitTest.h"
#include "../Solver/RealSolver.h"
#include "../Solver/RealAnswer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RealSolverTest
{
	TEST_CLASS(RealSolverTest)
	{
	public:

		TEST_METHOD(GetDiscriminant_ValidData_Success)
		{
			// arrange
			auto solver = new RealSolver{ };
			const auto expected = 1.0;

			// act
			const auto actual = solver->GetDiscriminant(1.0, -3.0, 2.0);

			//assert
			Assert::IsTrue(std::abs(expected - actual) <= std::numeric_limits<double>::epsilon());
		}

		TEST_METHOD(RealSolver_ValidData_TwoRoots)
		{
			//arrange
			const double a = 1.0;
			const double b = -3.0;
			const double c = 2.0;
			auto expected = (new RealAnswer{ 2, 1 })->ToString();

			//act
			RealSolver solver{};
			auto actual = (solver.Solve(a, b, c))->ToString();

			//assert
			Assert::AreEqual(expected, actual);

		}
	};
}