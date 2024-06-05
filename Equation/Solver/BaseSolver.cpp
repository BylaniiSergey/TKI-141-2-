#include "BaseSolver.h"

double BaseSolver::GetDiscriminant(
    const double a,
    const double b,
    const double c) const
{
    return b * b - 4 * a * c;
}