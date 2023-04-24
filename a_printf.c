#include "main.h"
/**
 *_printf - prints out a single character
 *@format: is a character string
 *@...: are unknown parameters
 *Return: the character count.
 */

int _printf(const char *format, ...)
{
	unsigned int s = 0, rtn = 0;
	va_list ext;
	int total = 0;

	va_start(ext, format);

	if (format == NULL)
		return (-1);

	while (format[s] != '\0')
	{
		if (format[s] == '%' && format[s + 1] == '\0')
			return (-1);

		if (format[s] == '%' && format[s + 1] != '\0')
		{	
			s++;
			if (format[s] == '%' || format[s] == 'c' || format[s] == 's')
			{	
				if (format[s] == '%')
				{
					total += put_char('%');
				}
				else if (format[s] == 'c')
				{
					total += put_char(va_arg(ext, int));
				}
				else if (format[s] == 's')
				{
					total += print_str(va_arg(ext, char*));
				}
			}
			else
			{	
				put_char('%');
				total += put_char(format[s]);
			}
		}
		else 
		{
			put_char(format[s]);
		}
		s++;
	}
	va_end(ext);
	return (total);
}
