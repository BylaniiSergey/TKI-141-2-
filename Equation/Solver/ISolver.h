#pragma once

class ISolver
{
public:
	ISolver() = default;
	double discriminant(double a, double b, double c);
	virtual ~ISolver() {};
};