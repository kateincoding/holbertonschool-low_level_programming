#include "holberton.h"

/**
 * _abs - function that generates the absolute of number
 * @n: The input value
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
