#include "calculus.h"

/**
 *
 *
 */
double Argument(complex c)
{
	if (c.a >= 0)
	{
		return (atan(c.b / c.a));
	}
	else if (c.a < 0)
	{
		return (PI + atan(c.b / c.a));
	}
	else if (c.b > 0)
	{
		return ((PI / 2) - atan(c.a / c.b));
	}
	else if (c.b < 0)
	{
		return ((-PI / 2) - atan(c.a / c.b));
	}

	return (0);
}
