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
 * binary_to_uint - function that converts a char binary to int
 * @b: binary in char
 * @i: marker
 * Return: number int; 0 if b is not binary so b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, res = 0, j = 0, len = _strlen(b);

	/*condition to check if it is binary or not*/
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
	}
	/*condition to stop recursion*/
	while (i <= len - 1)
	{
		dec = (b[i] - '0') << (len - i - 1);
 		res = dec + res;
		i++;
	}
	return (res);
}
