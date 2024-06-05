#include "ComplexAnswer.h"

ComplexAnswer::ComplexAnswer(Complex first, Complex second)
{
	this->first = first;
	this->second = second;

}

std::string ComplexAnswer::ToString() const
{
	return first.ToString() + "\n" + second.ToString() + "\n";
}

Complex ComplexAnswer::getFirst() const
{
	return first;
}

Complex ComplexAnswer::getSecond() const
{
	return second;
}

void ComplexAnswer::setFirst(Complex number) 
{
	this->first = number;
}

void ComplexAnswer::setSecond(Complex number) 
{
	this->second = number;
}