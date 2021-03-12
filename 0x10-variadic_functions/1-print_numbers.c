#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - fx that print numbers
 * @separator: separator char
 * @n: number of arguments
 * Return: args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int number;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
