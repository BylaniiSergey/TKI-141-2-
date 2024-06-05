#include "ComplexSolver.h"
#include "Complex.h"


BaseAnswer* ComplexSolver::Solve(double a, double b, double c) const 
{
    ComplexAnswer *roots = new ComplexAnswer(Complex(), Complex());
    double discriminant = this->GetDiscriminant(a, b, c);

    if (discriminant < 0) 
    {
        // ���� ������������ �������������, ����� ����� - ����������� �����
        double real_part = -b / (2 * a);
        double imaginary_part = sqrt(-discriminant) / (2 * a);

        roots->setFirst(Complex(real_part, imaginary_part));
        roots->setSecond(Complex(real_part, -imaginary_part));

    }
    else if (discriminant == std::numeric_limits<double>::epsilon()) 
    {
        // ���� ������������ ����� ����, ����� ����� - ���������� �������������� �����
        double root = -b / (2 * a);

        roots->setFirst(Complex(root, 0));
    }
    else 
    {
        // ���� ������������ �������������, ����� ����� - ��� ��������� �������������� �����
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        roots->setFirst(Complex(root1, 0));
        roots->setSecond(Complex(root2, 0));
    }
    return roots;
}