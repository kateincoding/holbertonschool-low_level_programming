#include "function_pointers.h"

/**
 * array_iterator - fx that executes a fx over array
 * @array: array
 * @size: size
 * @action: pointer to function that prints the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
