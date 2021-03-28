#include "calculus.h"

/**
 * 
 *
 */
void Division(complex c1, complex c2, complex *c3)
{
	complex cX, cY, conjugate;

	if (c2.a == 0 && c2.b == 0)
	{
		printf("Error\n");
		return;
	}
	conjugate.a = c2.a;
	conjugate.b = -c2.b;

	Multiplication(c1, conjugate, &cX);
	Multiplication(c2, conjugate, &cY);

	c3->a = cX.a / cY.a;
	c3->b = cX.b / cY.a;
}
