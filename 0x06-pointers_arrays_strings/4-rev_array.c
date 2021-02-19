#include "holberton.h"

/**
 * reverse_array - reverse the array of n characters
 * @a: array to reverse
 * @n: quantity to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < n)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
