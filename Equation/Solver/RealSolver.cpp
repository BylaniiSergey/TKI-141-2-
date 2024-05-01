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
    if (std::abs(a) <= std::numeric_limits<double>::epsilon())
    {
        throw std::runtime_error("No quadratic equation");
    }

    auto discriminant = this->GetDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        throw std::runtime_error("No real roots");
    }

    const auto root = std::sqrt(discriminant);
    const auto x1 = (-b + root) / (2 * a);
    const auto x2 = (-b - root) / (2 * a);

    return new RealAnswer(x1, x2);
}