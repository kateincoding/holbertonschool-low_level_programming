#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * f_char - prints arg char
 * @args: variadic list
 *
 * Return: No return
 */
void f_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * f_int - prints variadic arg int
 * @args: variadic list
 *
 * Return: No return
 */
void f_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * f_float - prints arg float
 * @args: variadic list
 *
 * Return: No return
 */
void f_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * f_string - prints argument string
 * @args: variadic list
 *
 * Return: No return
 */
void f_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - select and prints argvs
 * @format: pointer to char
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	ftype op[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string}
	};

	va_list args;
	char *separators = "";
	unsigned int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == op[j].c[0])
			{
				printf("%s", separators);
				op[j].f(args);
				separators = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
