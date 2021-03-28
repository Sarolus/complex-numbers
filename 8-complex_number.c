#include "calculus.h"

/**
 * 
 *
 */
void ComplexNumber(complex c)
{
	if (c.b > 0)
	{
		printf("%.2f+%.2fi\n" c.a, c.b);
	}
	else if (c.b < 0)
	{
		printf("%.2f-%.2fi\n" c.a, c.b);
	}
}
