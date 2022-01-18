#include "search_algos.h"

/**
 * print_scope - Print the scope of the array to search
 * @array: pointer to array
 * @left: left side to start the search
 * @right: last value to check in the array
 * Return: void
 */
void print_scope(int *array, int left, int right)
{
	int i;

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - binary search alg
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search in the array
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print_scope(array, left, right);
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
