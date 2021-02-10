#include <stdio.h>

/**
*main - program that prints the first 98 numbers of fibonacci
*
*Return: Always 0
*/
int main(void)
{
	int i;

	float n1;
	float n2;
	float n3;

	n1 = 1;
	n2 = 2;
	printf("%.0f, ", n1);
	printf("%.0f, ", n2);
	for (i = 3; i <= 98; i++)
	{
		n3 = n1 + n2;
		printf("%.0f", n3);
			if (i != 98)
				printf(", ");
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
