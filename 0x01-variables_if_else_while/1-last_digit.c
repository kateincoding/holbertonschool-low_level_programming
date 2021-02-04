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
	char string;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		string = "and is greater than 5";
	else if (n == 0)
		string = "and is 0";
	else if (n < 6)
		string = "and is less than 6 and not 0";
	printf("Last digit of %d is %string\n", n, string);
	return (0);
}
