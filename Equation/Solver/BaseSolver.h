#pragma once
#include "BaseAnswer.h"

class BaseSolver
{
public:
    virtual BaseAnswer* Solve(
        const double a,
        const double b,
        const double c) const = 0;
    double GetDiscriminant(
        const double a,
        const double b,
        const double c) const;
};