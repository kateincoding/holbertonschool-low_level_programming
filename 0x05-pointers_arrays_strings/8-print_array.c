#include "holberton.h"
#include <stdio.h>

/**
*_strlen - returns the length of a string
*@s: array
*Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
*print_array - print each character of array with , ' '
*@a: array
*@n: number of parameters to print
*Return: void
*/
void print_array(int *a, int n)
{
	int i;
	int len;

	len = _strlen(a)
	if (len >= n)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[i]);
	}
	printf("\n")
}
