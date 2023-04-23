#include "main.h"

double approx(int plc)
{
	double fac = 1, num, new_num, result = 0;
	int a, h;

	for (a = 0; a < plc; a++ )
	{
		fac *= 10;
		h++;
	}
	new_num = (num * fac) + 0.5;
	result = new_num / fac;
	printf("%f", result);

	return (h);
	
}
