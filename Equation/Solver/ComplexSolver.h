#pragma once
#include "BaseSolver.h"
#include "ComplexAnswer.h"
#include <cmath>
#include <utility>
class ComplexSolver : public BaseSolver 
{
public:
    // Конструктор класса
    ComplexSolver() = default;

    // Метод для нахождения комплексных корней
    BaseAnswer* Solve(double a, double b, double c) const override;
};