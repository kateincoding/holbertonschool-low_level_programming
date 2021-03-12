#ifndef VARIADIC_FUNCTIONS_H
# define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct Ftype - Struct op
 *
 * @c: Parameter char
 * @f: The function associated
 */
typedef struct Ftype
{
	char *c;
	void (*f)(va_list);
} ftype;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
