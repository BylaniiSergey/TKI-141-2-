#pragma once
#include "ISolver.h"
#include "Complex.h"
#include <cmath>
#include <vector>
class ComplexSolver : public ISolver {
public:
    // ����������� ������
    ComplexSolver(double _a, double _b, double _c);

    // ����� ��� ���������� ����������� ������
    std::vector<Complex> find_complex_roots();
};

