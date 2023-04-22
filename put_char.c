#include "main.h"

int put_char(char a)
{
	return (write(1, &a, 1));
}
