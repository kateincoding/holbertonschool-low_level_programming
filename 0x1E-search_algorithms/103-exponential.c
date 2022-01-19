#include "search_algos.h"

/**
 * print_scope_x - Print the scope of the array to search
 * @array: pointer to array
 * @left: left side to start the search
 * @right: last value to check in the array
 * Return: void
 */
void print_scope_x(int *array, int left, int right)
{
	int i;

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search_range - binary search alg
 * @array: pointer to array
 * @left: left size of the array
 * @right: right size of the array
 * @value: value to search in the array
 * Return: index
 */
int binary_search_range(int *array, size_t left, size_t right, int value)
{
	int mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_scope_x(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - exponential search alg
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search in the array
 * Return: index
 */
int exponential_search(int *array, size_t size, int value)
{
	int i;
	int high;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < ((int)size - 1))
		high = i;
	else
		high = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, high);
	return (binary_search_range(array, i / 2, high, value));
}
