#include "holberton.h"
#include <stdio.h>

/**
*_strlenint - returns the length of a string
*@s: array
*Return: length
*/
int _strlenint(int *s)
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

	len = _strlenint(a);
	if (len >= n)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
