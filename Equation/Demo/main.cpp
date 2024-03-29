#include <iostream>
#include <locale>
#include "..\Solver\SimpleSolver.h"
#include "..\Solver\ComplexSolver.h"
#include "..\Solver\Complex.h"

/**
* @brif Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	std::setlocale(NULL, "ru_RU.UTF-8");
	double a = 2.0, b = 7.0, c = 3.0;
	auto solver = SimpleSolver();
	std::cout << solver.solve(a, b, c).first << std::endl;
	if (solver.discriminant(a, b, c) > 0) 	std::cout << solver.solve(a, b, c).second << std::endl;
	Complex a1(1, -1);
	Complex a2(3, 6);
	Complex b1 = a1 * a2;
	Complex b2 = a1 / a2;
	std::cout << b1 << std::endl << b2 << std::endl << b1.stringExp() << std::endl << b1.stringTrig() << std::endl;
	auto comSolver = ComplexSolver();
	auto roots = comSolver.find_complex_roots(10, 5, 9);
	std::cout << "Комплексные корни:\n";
	std::cout << roots.first << "	" << roots.second << std::endl;
	return 0;
}