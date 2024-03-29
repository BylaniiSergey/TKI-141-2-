#pragma once
#include "ISolver.h"
#include <cmath>
#include <utility>
class SimpleSolver :
    public ISolver
{
public:
    SimpleSolver() = default;
    std::pair<double, double> solve(double a, double b, double c);
};

