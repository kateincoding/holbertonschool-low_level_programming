#include "holberton.h"

/**
 * print_sign - function that prints +,0,- if n is >0,0,<0
 * @n : to evaluate
 * Return: 1,0,-1 if n is >0,0,<0
 */
int print_sign(int n)
{
	if ( n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
