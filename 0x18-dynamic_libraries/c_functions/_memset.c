#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string to fill
 * @b: value to initialized
 * @n: numbers of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
