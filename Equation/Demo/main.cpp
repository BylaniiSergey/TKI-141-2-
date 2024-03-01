#include <iostream>
#include "..\Solver\SimpleSolver.h"

/**
* @brif Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
	double a = 2.0, b = 7.0, c = 3.0;
	auto solver = SimpleSolver(a, b, c);
	std::cout << solver.solve()[0] << std::endl;
	if (solver.discriminant() > 0) 	std::cout << solver.solve()[1] << std::endl;
	return 0;
}