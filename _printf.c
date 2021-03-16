#include "holberton.h"

int _printf(const char *format,...)
{
	int count = 0;
	int (*func_ptr)(va_list);

	va_list data;
	va_start(data, format);
	
	while (format && *format)
	{
		if (*format == '%')
		{
			func_ptr = function_select(++format);
			if (*func_ptr)
			{
				count += func_ptr(data);
			}
			if (*format != '%')
			{
				format++;
			}
		}
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(data);

	return (count);    
}
