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
	std::setlocale(NULL, "ru");
	double a = 2.0, b = 7.0, c = 3.0;
	auto solver = SimpleSolver(a, b, c);
	std::cout << solver.solve()[0] << std::endl;
	if (solver.discriminant() > 0) 	std::cout << solver.solve()[1] << std::endl;
	Complex a1(1, -1);
	Complex a2(3, 6);
	Complex b1 = a1 * a2;
	Complex b2 = a1 / a2;
	std::cout << b1 << std::endl << b2 << std::endl << b1.stringExp() << std::endl << b1.stringTrig() << std::endl;
	auto comSolver = ComplexSolver(10, 5, 9);
	auto roots = comSolver.find_complex_roots();
	std::cout << "Комплексные корни:\n";
	for (auto& root : roots) {
		std::cout << root << std::endl;
	}
	return 0;
}