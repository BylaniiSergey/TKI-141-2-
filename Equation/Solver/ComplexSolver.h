#pragma once
#include "ISolver.h"
#include "Complex.h"
#include <cmath>
#include <utility>
class ComplexSolver : public ISolver {
public:
    // Конструктор класса
    ComplexSolver() = default;

    // Метод для нахождения комплексных корней
    std::pair<Complex, Complex> find_complex_roots(double a, double b, double c);

};

