#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - fx that print strings
 * @separator: separator char
 * @n: number of arguments
 * Return: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
