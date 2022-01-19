#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search algorithm in ascending order array
 * @array: array of integers that will be sorted in ascending order
 * @size: size of the array
 * @value: number to search in the array
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int step;
	size_t i;
	int prev;

	if (size == 0 || value > array[size - 1])
		return (-1);
	/* Calculate block size of jumps */
	step = sqrt(size);
	/* Finding the block where element is present */
	i = 0;
	while (array[i] < value && i < size)
	{
		prev = i;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		i = step + i;
	}
	printf("Value found between indexes [%d] and [%lu]\n", prev, i);
	/* Linear search */
	while (array[prev] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			printf("Found %d at index: %d\n", value, prev);
			return (prev);
		}
		prev++;
	}
	/* In the another case, the value doesn't exist in the array */
	return (-1);
}
