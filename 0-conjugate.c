#include "calculus.h"

/**
 * 
 * 
 */
double Conjugate(complex c)
{
	return ((pow(c.a, 2) - pow(c.b, 2)) / (c.a - c.b));
}
