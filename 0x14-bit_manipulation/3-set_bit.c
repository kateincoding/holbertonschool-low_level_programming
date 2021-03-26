#include "holberton.h"
/**
 * set_bit - function that sets the index value of a bit to 1
 * @n: Value decimal to print in binary
 * @index:  index of the bit you want to get
 *
 * Return: 1 if it works, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_tmp;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	index_tmp = 1 << index;
	*n = *n | index_tmp;
	return (1);
}
