#include "main.h"
#include <stdio.h>
/**
 * print_str - prints a string.
 * @str: string to be printed.
 *
 * Return: string count
 */

int print_str(char *str)
{
	int a = 0, val = 0;

	if (!str)
	{
		str = "(null)";
	}
	for (; str[a] != '\0'; a++)
	{
		put_char(str[a]);
		val += 1;
	}
	return (val);
}
