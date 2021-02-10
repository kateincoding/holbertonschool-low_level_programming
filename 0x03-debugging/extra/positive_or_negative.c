#include "holberton.h"

/**
 * main - program that prints if it is positive, negative or zero
 * @n: number to evaluate
 * Return: Always 0 (0 = Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 00)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
