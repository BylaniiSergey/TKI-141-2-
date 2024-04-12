#pragma once
#include <string>
#include <iostream>
#include "BaseAnswer.h"

class Complex
{
	double real;
	double imaginary;
public:
	Complex();
	Complex(double real, double imaginary);
	std::string ToString() const;
	Complex(const Complex& other);
	friend std::ostream& operator<<(std::ostream& output, const Complex& a) {
		output << a.ToString();
		return output;
	}
	Complex operator+(Complex other);
	Complex operator-(Complex other);
	Complex operator*(Complex other);
	Complex operator/(Complex other);
	Complex conjugate();
	std::string stringAlgebra() {
		return "Алгебраическая форма: " + this->ToString();
	}
	std::string stringTrig() {
		double r = this->real; // модуль числа
		double theta = this->imaginary; // аргумент числа
		return "Тригонометрическая форма: " + std::to_string(r) + " * (cos(" + std::to_string(theta) + ") + i * sin(" + std::to_string(theta) + "))";

	}
	std::string stringExp() {
		double r = this->real; // модуль числа
		double theta = this->imaginary; // аргумент числа
		return "Экспоненциальная форма: " + std::to_string(r) + " * exp(i * " + std::to_string(theta) + ")";
	}
};