#include "holberton.h"
unsigned int get_absolut(int num);
/**
 * print_integrer - prints integers
 * @number: integer
 * Return: return the amount of print characters
 */
int print_integrer(va_list number)
{
	int num = va_arg(number, int);
	long digit = 1, divider10 = 10, divider = 10;
	long condition = 1, cont = 0, num_print = 0;
	unsigned int absolut = get_absolut(num);

	if (num < 0)
	{	write(1, "-", 1);
		cont++;
	}
	if (absolut >= 10)
	{
		while (condition)
		{
			while ((absolut / divider) >= 10)
			{	divider10 *= 10;
				divider = divider10;
			}
			if (digit == 1)
			{	num_print = (absolut / divider10);
				digit = 0;
			}
			else
			{	num_print = (absolut / divider10);
				num_print %= 10;
			}
			num_print = num_print + '0';
			write(1, &num_print, 1);
			cont++;
			divider10 /= 10;
			if (divider10 == 0)
			break;
		}
	}
	else
	{	absolut = absolut + '0';
		write(1, &absolut, 1);
		cont++;
	}
	return (cont);
}
/**
 * get_absolut - absolut number
 * @num: integer
 * Return: return absolut number
 */
unsigned int get_absolut(int num)
{
	unsigned int absolut;

	if (num < 0)
		absolut = ((unsigned int)(num)) * -1;
	else
		absolut = ((unsigned int)(num));
	return (absolut);
}
