#include "holberton.h"

/**
 * print_last_digit - Generate the last digit of a number n
 * @n: The number to be cheked
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	if (n > 10)
		n = n % 10;
	else if (n == 10 || n == 0)
		n = 0;
	_putchar(n + '0');
	return (n);
}
