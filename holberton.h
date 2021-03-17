#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct print_f - printf structure
 * @character: character
 * @func_ptr: function pointer
 */

typedef struct print_f
{
	char *character;
	int (*func_ptr)(va_list);
} for_print;

int print_string(va_list string);
int print_char(va_list character);
int _printf(const char *format, ...);
int print_porcent(va_list argumentos);
int (*function_select(const char *character))(va_list);
int print_integrer(va_list number);

#endif
