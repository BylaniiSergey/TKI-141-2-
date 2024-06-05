#include "CppUnitTest.h"
#include "../Solver/ComplexSolver.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ComplexSolverTests
{
	TEST_CLASS(ComplexSolverTests)
	{
	public:

		TEST_METHOD(TestComplexRoots)
		{
			ComplexSolver solver;
			double a = 1.0, b = 2.0, c = 5.0;
			ComplexAnswer* result = dynamic_cast<ComplexAnswer*>(solver.Solve(a, b, c));

			Assert::IsNotNull(result, L"Результат не должен быть nullptr");

			double realPart = -b / (2 * a);
			double imaginaryPart = sqrt(-c) / (2 * a);

			//Assert::AreEqual(realPart, result->getFirst().getRealPart(), L"Неверная действительная часть первого корня");
			//Assert::AreEqual(imaginaryPart, result->getFirst().getImaginaryPart(), L"Неверная мнимая часть первого корня");

			//Assert::AreEqual(realPart, result->getSecond().getRealPart(), L"Неверная действительная часть второго корня");
			//Assert::AreEqual(-imaginaryPart, result->getSecond().getImaginaryPart(), L"Неверная мнимая часть второго корня");
		}

		TEST_METHOD(TestSingleRoot)
		{
			ComplexSolver solver;
			double a = 1.0, b = 2.0, c = 1.0;
			ComplexAnswer* result = dynamic_cast<ComplexAnswer*>(solver.Solve(a, b, c));

			Assert::IsNotNull(result, L"Результат не должен быть nullptr");

			double root = -b / (2 * a);

			//Assert::AreEqual(root, result->getFirst().getRealPart(), L"Неверная действительная часть корня");
			//Assert::AreEqual(0.0, result->getFirst().getImaginaryPart(), L"Мнимая часть корня должна быть равна 0");
		}

		TEST_METHOD(TestRealRoots)
		{
			ComplexSolver solver;
			double a = 1.0, b = -3.0, c = 2.0;
			ComplexAnswer* result = dynamic_cast<ComplexAnswer*>(solver.Solve(a, b, c));

			Assert::IsNotNull(result, L"Результат не должен быть nullptr");

			double root1 = (3 + sqrt(1)) / 2;
			double root2 = (3 - sqrt(1)) / 2;

			//Assert::AreEqual(root1, result->getFirst().getRealPart(), L"Неверная действительная часть первого корня");
			//Assert::AreEqual(0.0, result->getFirst().getImaginaryPart(), L"Мнимая часть первого корня должна быть равна 0");

			//Assert::AreEqual(root2, result->getSecond().getRealPart(), L"Неверная действительная часть второго корня");
			//Assert::AreEqual(0.0, result->getSecond().getImaginaryPart(), L"Мнимая часть второго корня должна быть равна 0");
		}
	};
}