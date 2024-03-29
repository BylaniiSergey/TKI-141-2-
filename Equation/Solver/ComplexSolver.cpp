#include "ComplexSolver.h"


std::pair<Complex, Complex> ComplexSolver::find_complex_roots(double a, double b, double c) {
    std::pair<Complex, Complex> roots;
    double discriminant = this->discriminant(a, b, c);

    if (discriminant < 0) {
        // Если дискриминант отрицательный, тогда корни - комплексные числа
        double real_part = -b / (2 * a);
        double imaginary_part = sqrt(-discriminant) / (2 * a);

        roots.first = Complex(real_part, imaginary_part);
        roots.second = Complex(real_part, -imaginary_part);

    }
    else if (discriminant == std::numeric_limits<double>::epsilon()) {
        // Если дискриминант равен нулю, тогда корни - одинаковые действительные числа
        double root = -b / (2 * a);

        roots.first=Complex(root, 0);
    } else {
        // Если дискриминант положительный, тогда корни - два различных действительных числа
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        roots.first=Complex(root1, 0);
        roots.second=Complex(root2, 0);
    }
    return roots;
}