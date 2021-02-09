#include "holberton.h"
#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
	int n;
	int sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
