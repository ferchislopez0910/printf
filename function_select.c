#include "holberton.h"

/**
 * function_select - Structure
 * @character: ptr
 * Return: Always.
 */

int (*function_select(const char *character))(va_list)
{
	int i = 0;

	for_print functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_porcent},
		{"i", print_integrer},
		{"d", print_integrer},
		{NULL, NULL},};

	while (functions[i].character != NULL)
	{
		if (*(functions[i].character) == *character)
		{
			return (functions[i].func_ptr);
		}
		i++;
	}

	return (NULL);
}
