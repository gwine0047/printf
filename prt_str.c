#include "main.h"
#include <stdio.h>

int print_str(char *str)
{
	int a = 0, val = 0;
	
	if (!str)
		return (-1);

	else
	{
		for (; str[a] != '\0'; a++)
		{
			put_char(str[a]);
			val += 1;
		}
	}
	return (val);
}
