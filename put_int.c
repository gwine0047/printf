#include "main.h"

/**
 * put_int -  puts integer
 * @num: number
 * Return: a if true
 */

int put_int(int num)
{
	int a;
	char buffer[1024];

	a = sprintf(buffer, "%d", num);

	write(1, buffer, a);
	return (a);
}
