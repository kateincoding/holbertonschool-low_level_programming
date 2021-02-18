#include "holberton.h"

/**
*_strlen - returns the length of a string
*@s: array
*Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
*_strncat - function to add src to dest
*@dest: dest
*@src: source
*@n: n quatity
*Return: dest
*/
char *_strncat(char *dest, char *src, int n);
{
		size_t i;
		size_t j;

		i = _strlen(dest)
		j = 0;
		while (s2[j] && j < n)
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (dest);
}
