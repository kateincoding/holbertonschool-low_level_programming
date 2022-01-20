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
 * recursive_binary_search - binary search alg
 * @array: pointer to array
 * @left: initial part of the array
 * @right: final part of the array
 * @value: value to search in the array
 * Return: index
 */
int recursive_binary_search(int *array, int left, int right, int value)
{
	int mid;

	if (!array || left > right)
		return (-1);

	printf("Searching in array: ");
	print_scope(array, left, right);

	if (left == right && array[right] == value)
		return (right);

	if (left == right && array[right] != value)
		return (-1);

	mid = left + (right - left) / 2;

	if ((value != array[mid - 1]) && array[mid] == value)
		return (mid);

	if (array[mid] >= value)
		return (recursive_binary_search(array, left, mid, value));
	return (recursive_binary_search(array, mid + 1, right, value));
}

/**
 * advanced_binary - binary search alg
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search in the array
 * Return: index
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left;
	int right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	return (recursive_binary_search(array, left, right, value));
}
