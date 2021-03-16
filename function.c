#include "holberton.h"

int print_char(va_list data)
{
    int character = (char)va_arg(data, int);

    	write(1, &character, 1);

	return (1);
}

int print_string(va_list string)
{
	char *str_char = va_arg(string, char *);
	int count = strlen(str_char);

	write(1, str_char, count);

	return (count);
}

int print_porcent(va_list porcent)
{
	(void)porcent;

	write(1, "%", 1);

	return (1);
}
