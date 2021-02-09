#include <stdio.h>

/**
*main - program that prints the sum of numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	unsigned long n1;
	unsigned long n2;
	unsigned long n3;
	unsigned long sum;

	n1 = 0;
	n2 = 1;
	sum = 0;
	n3 = 0;
	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
			sum = n3 + sum;
		n1 = n2;
		n2 = n3;
	}
	printf("%lu\n", sum);
	return (0);
}
