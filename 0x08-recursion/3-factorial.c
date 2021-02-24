#include "holberton.h"

/**
 * factorial - factorial of number n
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
