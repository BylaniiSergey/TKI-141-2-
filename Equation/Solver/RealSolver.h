#pragma once
#include "BaseSolver.h"

class RealSolver : public BaseSolver
{
public:
    BaseAnswer* Solve(
        const double a,
        const double b,
        const double c) const override;
};