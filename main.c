#include "complex.h"

int main()
{
	complex c1 = {.a=3, .b=-4};
	complex c2 = {.a=-3, .b=4};
	complex c3;
	//c1.a = 3;
	//c1.b = -4;
	//c2.a=-3;
	//c2.b=4;
	printf("%f\n", Conjugate(c1));
	printf("%f\n", Modulus(c1));
	printf("%f\n", Modulus(c3));
	printf("%f\n", Argument(c1));
	Division(c1, c2, &c3);
	printf("%f,", c3.a);
	printf("%f\n", c3.b);
	printf("%f\n", (double)(7 / 25));
	//ComplexNumber(c1);
	//Addition(c1,c2,&c3);
	//ComplexNumber(c3);
	return 0;
}
