#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: Value decimal to print in binary
 * @index:  is the index
 *
 * Return: Value of the bit in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_slide, validate;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	index_slide = 1 << index;
	validate = n & index_slide;
	if (index_slide == validate)
		return (1);
	return (0);
}
