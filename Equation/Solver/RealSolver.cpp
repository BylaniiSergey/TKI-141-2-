#include "RealSolver.h"
#include "RealAnswer.h"

#include <cmath>
#include <limits>
#include <stdexcept>

BaseAnswer* RealSolver::Solve(
    const double a,
    const double b,
    const double c) const
{
    if (a <= std::numeric_limits<double>::epsilon())
    {
        throw std::runtime_error("No quadratic equation");
    }

    auto discriminant = this->GetDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        throw std::runtime_error("No real roots");
    }

    return new RealAnswer(
        (b + std::sqrt(discriminant)) / (2 * a),
        (b - std::sqrt(discriminant)) / (2 * a));
}