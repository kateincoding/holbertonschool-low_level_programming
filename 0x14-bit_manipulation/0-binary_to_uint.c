#include "holberton.h"

/**
 * binary_to_uint - function that converts a char binary to int
 * @b: binary in char
 * Return: number int; 0 if b is not binary so b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, res = 0, len;

	if (!b)
		return (0);
	/*condition to check if it is binary or not*/
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len = len - 1;
	/*condition to stop recursion*/
	while (i <= len)
	{
		dec = (b[i] - '0') << (len - i);
		res = dec | res;
		i++;
	}
	return (res);
}
