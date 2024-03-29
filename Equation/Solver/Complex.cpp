#include "Complex.h"
#include <format>
#include<limits>

Complex::Complex(double real, double imaginary)
	:real(real), imaginary(imaginary) {}

std::string Complex::toString() const {
	if (this->imaginary < 0) {
		return std::format("({} - {}i)", this->real, -this->imaginary);
	}
	return std::format("({} + {}i)", this->real, this->imaginary);
}

Complex Complex::operator+(Complex other) {
	return Complex(this->real + other.real, this->imaginary + other.imaginary);
}

Complex Complex::operator-(Complex other) {
	return Complex(this->real - other.real, this->imaginary - other.imaginary);
}

Complex Complex::operator*(Complex other) {
	return Complex(this->real * other.real - this->imaginary * other.imaginary, this->real * other.imaginary + this->imaginary * other.real);
}

Complex Complex::operator/(Complex other) {
	auto a = this->real;
	auto b = this->imaginary;
	auto c = other.real;
	auto d = other.imaginary;
	if (a * a + d * d <= std::numeric_limits<double>::epsilon()) throw;
	return Complex((a * c + b * d) / (c * c + d * d), (b * c - a * d) / (c * c + d * d));
}

Complex Complex::conjugate() {
	return Complex(this->real, -this->imaginary);
}

Complex::Complex(const Complex& other) {
	this->real = other.real;
	this->imaginary = other.imaginary;
}

Complex::Complex() {
	this->real = 0;
	this->imaginary = 0;
}