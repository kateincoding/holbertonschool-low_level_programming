#include "holberton.h"

/**
*_strlen - returns the length of a string
*@s: array
*Return: length
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * binary_to_decimal - function that converts a char binary to int
 * @b: binary in char
 * @i: marker
 * Return: number int; 0 if b is not binary so b is NULL
 **/
unsigned int binary_to_decimal(const char *b, unsigned int i)
{
	unsigned int j = 0, len = _strlen(b);

	/*condition to check if it is binary or not*/
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			b[0] = '\0';
			return (0);
		}
	}
	/*condition to stop recursion*/
	if (i == len - 1)
		return (b[i] - '0');
	return (((b[i] - '0') << (len - i - 1)) + binary_to_decimal(b, i + 1));
}

/**
 * binary_to_uint - function that converts a char binary to int
 * @b: binary in char
 * Return: number int; 0 if b is not binary so b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	return (binary_to_decimal(b, 0));
}
