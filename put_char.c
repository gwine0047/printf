#include "main.h"
/**
 * put_char - writes the character a to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 * appropriately.
 */

int put_char(char a)
{
	return (write(1, &a, 1));
}
