#include "holberton.h"

/**
 * print_recursion - print with recursion
 * @n: number
 * Return: prints and void
 */
void print_recursion(unsigned long n)
{
	if (n == 0)
		return (0);

	print_recursion(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - print binaries
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_recursion(n);
}
