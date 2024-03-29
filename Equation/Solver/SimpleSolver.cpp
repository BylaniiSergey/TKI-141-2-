#include "SimpleSolver.h"
#include <limits>

std::pair<double, double> SimpleSolver::solve(double a, double b, double c) {
    if (a == 0 && b != 0) {
        return std::pair<double, double>(-c / b, -c / b);
    }
    if (a != 0 && b == 0) {
        return std::pair<double,double>(sqrt( -c / a), sqrt(-c / a));
    }
    auto discr = discriminant(a, b, c);
    if (discr < std::numeric_limits<double>::epsilon())
    {
        throw;
    }
    if (discr == std::numeric_limits<double>::epsilon())
    {
        auto solve = -b / (2 * a);
        return std::pair<double, double>{solve, solve};
    }
    auto solve1 = (-b + sqrt(discr)) / (2 * a);
    auto solve2 = (-b - sqrt(discr)) / (2 * a);
    return std::pair<double, double> {solve1, solve2};
}