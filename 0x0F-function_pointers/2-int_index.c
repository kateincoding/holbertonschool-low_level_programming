#include "function_pointers.h"

/**
 * int_index - return the index of first element when cmp != 0
 * @array: array
 * @size: number of element in the array
 * @cmp: pointer to function to compare values
 * Return: index of character array , -1 error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
