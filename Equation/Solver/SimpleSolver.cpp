#include "SimpleSolver.h"

SimpleSolver::SimpleSolver(double a, double b, double c)
    :ISolver(a, b, c) {}
std::vector<double> SimpleSolver::solve() {
    auto discr = discriminant();
    if (discr < 0) {
        throw;
    }
    if (discr == 0) {
        auto solve = -b / (2 * a);
        return std::vector<double>{solve};
    }
    auto solve1 = (-b + sqrt(discr)) / (2 * a);
    auto solve2 = (-b - sqrt(discr)) / (2 * a);
    return std::vector<double> {solve1, solve2};
}