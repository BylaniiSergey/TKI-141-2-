#include <iostream>
#include <locale>
#include "../Solver/RealSolver.h"
#include "..\Solver\ComplexSolver.h"
#include "../Solver/ComplexAnswer.h"
#include "../Solver/BaseSolver.h"

/**
* @brif Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	std::setlocale(NULL, "ru_RU.UTF-8");
	double a = 2.0, b = 7.0, c = 3.0;
	auto solver = RealSolver();
	std::cout << solver.Solve(a, b, c)->ToString() << std::endl;
	if (solver.GetDiscriminant(a, b, c) > 0) 	std::cout << solver.Solve(a, b, c)->ToString() << std::endl;
	Complex a1(1, -1);
	Complex a2(3, 6);
	Complex b1 = a1 * a2;
	Complex b2 = a1 / a2;
	std::cout << b1 << std::endl << b2 << std::endl << b1.stringExp() << std::endl << b1.stringTrig() << std::endl;
	auto comSolver = ComplexSolver();
	auto roots = comSolver.Solve(10, 5, 9);
	std::cout << "Комплексные корни:\n";
	std::cout << roots->ToString() << std::endl;
	return 0;
}