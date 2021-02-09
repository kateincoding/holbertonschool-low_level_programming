#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int na;
	int nb;
	int nc;

	if (a < 0)
		na = -a;
	else
		na = a;
	if (b < 0)
		nb = -b;
	else
		nb = b;
	if (c < 0)
		nc = -c;
	else
		nc = c;
	if (na > nb && na > nc)
	{
		largest = a;
	}
	else if (nb > na && nb > nc)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
