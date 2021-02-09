#include <stdio.h>

/**
*main - program that prints the first 50 numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	int i;
	long b;
	long n0;
	long n1;

	b = 0;
	n0 = 1;
	for (i = 1; i < 48; i++)
	{
		n1 = b + n0;
		printf("%zu, ", n1);
		b = n0;
		n0 = n1;
	}
	n1 = b + n0;
	printf("%zu\n", n1);
	return (0);
}
