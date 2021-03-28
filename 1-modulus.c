#include "calculus.h"

/**
 *
 * 
 */
double Modulus(complex c)
{
	double result;

	result = sqrt(pow(c.a, 2) + pow(c.b, 2));

	return (result);
}
