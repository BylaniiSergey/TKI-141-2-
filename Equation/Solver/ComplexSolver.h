#pragma once
#include "ISolver.h"
#include "Complex.h"
#include <cmath>
#include <vector>
class ComplexSolver : public ISolver {
public:
    // Конструктор класса
    ComplexSolver(double _a, double _b, double _c);

    // Метод для нахождения комплексных корней
    std::vector<Complex> find_complex_roots();
};

