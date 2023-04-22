#include "main.h"

int my_printf(const char *format, ...)
{
	unsigned int s,rtn = 0;
	va_list ext;

	va_start(ext, format);

	for (s = 0; format[s] != '\0'; s++)
	{
		if (format[s] != '%')
		{
			put_char(format[s]);	
		}
		else if (format[s + 1] == 'c')
		{
			put_char(va_arg(ext, int));
			s++;
		}
		else if (format[s + 1] == 's')
		{
			int s_rtn;
			s_rtn = print_str(va_arg(ext, char*));
			s++;
			rtn += s_rtn - 1;
		}
		else if (format[s + 1] == '%')
		{
			put_char('%');
			s++;
		}
		rtn++;
	}
	return(rtn);
}
