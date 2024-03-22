#include "ComplexSolver.h"


ComplexSolver::ComplexSolver(double _a, double _b, double _c) : ISolver(_a, _b, _c) {}

std::vector<Complex> ComplexSolver::find_complex_roots() {
    std::vector<Complex> roots;
    double discriminant = this->discriminant();

    if (discriminant < 0) {
        // ���� ������������ �������������, ����� ����� - ����������� �����
        double real_part = -b / (2 * a);
        double imaginary_part = sqrt(-discriminant) / (2 * a);

        roots.emplace_back(Complex(real_part, imaginary_part));
        roots.emplace_back(Complex(real_part, -imaginary_part));

    }
    else if (discriminant == 0) {
        // ���� ������������ ����� ����, ����� ����� - ���������� �������������� �����
        double root = -b / (2 * a);

        roots.emplace_back(Complex(root, 0));
    } else {
        // ���� ������������ �������������, ����� ����� - ��� ��������� �������������� �����
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        roots.emplace_back(Complex(root1, 0));
        roots.emplace_back(Complex(root2, 0));
    }
    return roots;
}