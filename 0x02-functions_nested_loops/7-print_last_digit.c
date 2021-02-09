#include "holberton.h"

/**
 * print_last_digit - Generate the last digit of a number n
 * @n: The number to be cheked, integer limit 2147483647, -2147483648
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		n = n;
	else
		n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
