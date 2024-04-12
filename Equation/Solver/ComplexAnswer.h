#pragma once
#include "Complex.h"
class ComplexAnswer : public BaseAnswer
{
public:
	ComplexAnswer(Complex first, Complex second);
	std::string ToString() const;
	Complex getFirst() const;
	Complex getSecond() const;
	void setFirst(Complex number);
	void setSecond(Complex number);

private:
	Complex first;
	Complex second;
};