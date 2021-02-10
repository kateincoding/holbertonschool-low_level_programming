#include <stdio.h>

/**
*main - program that prints the first 50 numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	int i;
	long double n1;
	long double n2;
	long double n3;

	n1 = 0;
	n2 = 1;
	for (i = 1; i < 98; i++)
	{
		n3 = n1 + n2;
		printf("%.0Lf, ", n3);
		n1 = n2;
		n2 = n3;
	}
	n3 = n1 + n2;
	printf("%.0Lf\n", n3);
	return (0);
}
