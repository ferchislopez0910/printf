#include "holberton.h"

/**
 * _printf - Prints according to data type
 * @format: type of data
 * Return: Return the amount of print characters
 */

int _printf(const char *format, ...)
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
			else
			{
				write(1, format - 1, 1);
				count++;
				write(1, format, 1);
				count++;
			}
			if (*format != '%')
			{
				format++;
			}
		}
		if (*format != '\0')
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}
	va_end(data);

	return (count);
}
