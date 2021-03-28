#include "calculus.h"

/**
 *
 *
 */
void ComplexFromModArg(double m, double arg, complex *c3)
{
	c3->a = m * cos(arg);
	c3->b = m * sin(arg);
}
