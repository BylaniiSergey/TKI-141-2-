#pragma once
#include "BaseSolver.h"
#include "ComplexAnswer.h"
#include <cmath>
#include <utility>
class ComplexSolver : public BaseSolver 
{
public:
    // ����������� ������
    ComplexSolver() = default;

    // ����� ��� ���������� ����������� ������
    BaseAnswer* Solve(double a, double b, double c) const override;
};