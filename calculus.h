#ifndef CALCULUS_H
#define CALCULUS_H
#include <math.h>
#include <stdio.h>

#define PI 3.141592653589793

typedef struct
{
	double a;
	double b;
} complex;

double Conjugate(complex c);
double Modulus(complex c);
double Argument(complex c);
void Addition(complex c1, complex c2, complex *c3);
void Subtraction(complex c1, complex c2, complex *c3);
void Multiplication(complex c1, complex c2, complex *c3);
void Division(complex c1, complex c2, complex *c3);
void ComplexFromModArg(double m, double arg, complex *c3);
void ComplexNumber(complex c);

#endif /* CALCULUS_H */
