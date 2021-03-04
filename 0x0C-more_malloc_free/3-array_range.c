#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min  value
 * @max: max value
 * Return: pointer for array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
		return (NULL);
	/* len  = max - min + 1 */
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	while (min <= max)
		*(p + i++) = min++;
	return (p);
}
