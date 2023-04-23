#include "main.h"
/**
 *_printf - prints out a single character
 *@format: is a character string
 *@...: are unknown parameters
 *Return: the character count.
 */

int _printf(const char *format, ...)
{
	unsigned int s, rtn = 0;
	int s_rtn;
	va_list ext;

	va_start(ext, format);

	if (format == NULL)
		return (-1);

	for (s = 0; format[s] != '\0'; s++)
	{
		if (format[s] != '%')
		{
			put_char(format[s]);
		}
		else if (format[s] == '%' && format[s + 1] == 'c')
		{
			put_char(va_arg(ext, int));
			s++;
		}
		else if (format[s] == '%' && format[s + 1] == 's')
		{
			s_rtn = print_str(va_arg(ext, char*));
			s++;
			rtn += s_rtn - 1;
		}
		else if (format[s + 1] == '%')
		{
			put_char(format[s + 1]);
			s++;
		}
		rtn++;
	}
	va_end(ext);
	return (rtn);
}
