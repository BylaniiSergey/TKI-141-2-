#pragma once
#include <string>
#include <iostream>

class Complex
{
	double real;
	double imaginary;
public:
	Complex(double real, double imaginary);
	std::string toString() const;
	Complex(const Complex& other) {
		this->real = other.real;
		this->imaginary = other.imaginary;
	}
	friend std::ostream& operator<<(std::ostream& output, const Complex& a) {
		output << a.toString();
		return output;
	}
	friend std::istream& operator>>(std::istream & is, Complex & c) {
		std::cout << "������� �������������� �����: ";
		is >> c.real;
		std::cout << "������� ������ �����: ";
		is >> c.imaginary;
		return is;
	}
	Complex operator+(Complex other);
	Complex operator-(Complex other);
	Complex operator*(Complex other);
	Complex operator/(Complex other);
	std::string stringAlgebra() {
		return "�������������� �����: " + this->toString();
	}
	std::string stringTrig() {
		double r = this->real; // ������ �����
		double theta = this->imaginary; // �������� �����
		return "������������������ �����: " + std::to_string(r) + " * (cos(" + std::to_string(theta) + ") + i * sin(" + std::to_string(theta) + "))";

	}
	std::string stringExp() {
		double r = this->real; // ������ �����
		double theta = this->imaginary; // �������� �����
		return "���������������� �����: " + std::to_string(r) + " * exp(i * " + std::to_string(theta) + ")";
	}
};

