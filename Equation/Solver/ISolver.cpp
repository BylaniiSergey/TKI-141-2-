#include "ISolver.h"

ISolver::ISolver(double a, double b, double c)
:a(a), b(b), c(c) {}

double ISolver::discriminant() {
	return b * b - 4 * a * c;
}