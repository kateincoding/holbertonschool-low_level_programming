#include <stdio.h>

/**
 * _is_prime - function that check if a number is prime
 * @n: number to evaluate
 * Return: 0 if is true ; 1 if is false
 */

int	_is_prime(unsigned long int n)
{
	unsigned long int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 *main - Entry point of program that output the max number of a n
 *
 *Return: always zero
 */
int	main(void)
{
	unsigned long int n;
	unsigned long int div_number = 2;
	unsigned long int max_prime;

	n = 612852475143;
	while (div_number <= n)
	{
		if (n % div_number == 0 && _is_prime(div_number))
		{
			n = n / div_number;
			max_prime = div_number;
		}
		else
			div_number++;
	}
	printf("%lu\n", max_prime);
	return (0);
}
