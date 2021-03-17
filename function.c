#include "holberton.h"
/**
 * print_char - print characters
 * @data: data variable
 * Return: 1
 */
int print_char(va_list data)
{
	int character = (char)va_arg(data, int);

	write(1, &character, 1);

	return (1);
}
/**
 * print_string - print strings
 * @string: string
 * Return: 1
 */
int print_string(va_list string)
{
	int count;
	char *str_char = va_arg(string, char *);

	if (*str_char && str_char)
	{
		count = strlen(str_char);
		write(1, str_char, count);
		return (count);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
/**
 * print_porcent - print strings
 * @porcent: percentage
 * Return: 1
 */
int print_porcent(va_list porcent)
{
	(void)porcent;

	write(1, "%", 1);

	return (1);
}
