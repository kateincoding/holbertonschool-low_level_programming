#include <stdio.h>

/**
*main - program that prints the first 50 numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	int i;
	long n1;
	long n2;
	long n3;

	n1 = 0;
	n2 = 1;
	for (i = 1; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%zu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	n3 = n1 + n2;
	printf("%zu\n", n3);
	return (0);
}
