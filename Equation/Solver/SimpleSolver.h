#pragma once
#include "ISolver.h"
#include <vector>
#include <cmath>
class SimpleSolver :
    public ISolver
{
public:
    SimpleSolver(double a, double b, double c);
    std::vector<double> solve();
};

