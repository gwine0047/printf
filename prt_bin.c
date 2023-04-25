#include "main.h"

int prt_bin(unsigned int a)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		put_char((a >> i & 1 ? '1' : '0'));
	}
	return (0);
}
