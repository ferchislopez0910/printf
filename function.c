#include "holberton.h"
/**
 * print_char - print characters
 * @data: data variable
 * Return: 1
 */
int print_char(va_list data)
{
	int character = (char)va_arg(data, int);

	if (character != 0)
	{
		write(1, &character, 1);
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * print_string - print strings
 * @string: string
 * Return: 1
 */
int print_string(va_list string)
{
	int cont;
	char *str = va_arg(string, char *);

	if (str && *str)
	{
		cont = strlen(str);
		write(1, str, cont);
		return (cont);
	}
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		return (0);
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
