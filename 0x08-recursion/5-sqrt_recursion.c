#include "holberton.h"

/**
 * sqrt_modify - with 2 input
 * @n: number
 * @i: number to iterate
 * Return: square root
 */
int sqrt_modify(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt_modify(n, i + 1));
}

/**
 * _sqrt_recursion - search square root of n
 * @n: number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_modify(n, 1));
}
