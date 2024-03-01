#pragma once
class ISolver
{
protected:
	double a = 0;
	double b = 0;
	double c = 0;
public:
	ISolver(double a, double b, double c);
	double discriminant();
};