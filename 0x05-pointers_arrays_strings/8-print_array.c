#include "holberton.h"
#include <stdio.h>

/**
*print_array - print each character of array with , ' '
*@a: array
*@n: number of parameters to print
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
