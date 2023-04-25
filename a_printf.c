#include "main.h"
/**
 *_printf - prints out a single character
 *@format: is a character string
 *@...: are unknown parameters
 *Return: the character count.
 */

int _printf(const char *format, ...)
{

	va_list ext;
	int total = 0;

	va_start(ext, format);

	if (!format)
		return (-1);
 	total += print(format, ext);
	va_end(ext);
	return (total);
}

int print(const char *format, va_list ext)
{
	unsigned int s = 0;
	int total = 0;

	while (format[s] != '\0')
	{
		if (format[s] == '%' && format[s + 1] == '\0')
			return (-1);

		if (format[s] == '%' && format[s + 1] != '\0')
		{
<<<<<<< HEAD
				s++;
			if (format[s] == '%' || format[s] == 'c' ||
					format[s] == 's' || format[s] == 'i' ||
					format[s] == 'd' || format[s] == 'b')
=======
			s++;
			if (format[s] == '%' || format[s] == 'c' || format[s] == 's' || format[s] == 'i' || format[s] == 'd' || format[s] == 'b')
>>>>>>> 832358fc7b370f250c8d1471712e410003bba1d0
			{
				if (format[s] == '%')
					total += put_char('%');
				else if (format[s] == 'c')
					total += put_char(va_arg(ext, int));
				else if (format[s] == 's')
					total += print_str(va_arg(ext, char*));
				else if (format[s] == 'i' || format[s] == 'd')
					total += put_int(va_arg(ext, int));
			}
			else
			{
				total += put_char('%');
				total += put_char(format[s]);
			}
		}
		else
			total += put_char(format[s]);
		s++;
	}
	return (total);
}
