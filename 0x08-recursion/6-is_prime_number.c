#include "holberton.h"

/**
 * is_prime - Checks if is prime running a factor since 1 to n
 * @n: number
 * @factor: number to running
 * Return: prime number if is prime, 0 if is not
 */
int is_prime(int n, int factor)
{
	if (n == factor)
		return (1);
	else if (n % factor == 0)
		return (0);
	return (is_prime(n, factor + 1));
}
/**
 * is_prime_number - function principal if n is prime
 * @n: number
 * Return: prime numer else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
