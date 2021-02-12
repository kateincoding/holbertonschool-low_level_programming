#include "holberton.h"

/**
 *length_number - functions that calculate the length of a number
 *@n: number
 *Return: length
 */
int length_number(int n)
{
	int i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/**
 *print_number - function that print a number using putchar
 *@n: number
 *Return: void
 */
void print_number(int n)
{
	int length;
	int digit;
	int factor;
	int decimal;

	factor = 1;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	length = length_number(n);
	while (length > 1)
	{
		decimal = length;
		while (decimal-- > 1)
			factor = 10 * factor;
		digit = n / factor;
		n = n - (digit * factor);
		_putchar(digit + '0');
		length--;
		factor = 1;
	}
	_putchar(n + '0');
}
