#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generates a number and prints if it is >5 , < 6 or =0
 *
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is %d is 0\n", n, n % 10);
	else if (n < 6)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, n % 10);
	return (0);
}

