#include <stdio.h>

/**
*main - program that prints the first 98 numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	int i;

	unsigned long int n1, n2, n3;
	unsigned long int d1, d3, r1, r2;

	n1 = 1;
	n2 = 2;
	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (i = 3; i <= 98; i++)
	{
		if (n1 + n2 > 10000000000 || r2 > 0 || r1 > 0)
                {
                        d1 = (n1 + n2) / 10000000000;
                        n3 = (n1 + n2) % 10000000000;
                        d3 = r1 + r2 + d1;
                        r1 = r2, r2 = d3;
                        n1 = n2, n2 = n3;
                        printf("%lu%010lu", r2, n2);
                }
		else
		{
			n3 = n1 + n2;
			printf("%lu", n3);
			n1 = n2;
			n2 = n3;
		}
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
