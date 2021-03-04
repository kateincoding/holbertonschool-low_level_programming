#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - fill a len byte 'n' string 's' with a byte value 'c'
 * @s: string to set
 * @c: byte value to set in *s
 * @n: len bytes to set in str
 * Return: void
 */
void *_memset(char *s, int c, size_t n)
{
	size_t i = 0;

	while (i < n)
		s[i++] = c;
	(void) s;

	return (s);
}
/**
 * _calloc - allocates memory for an array of 'nmemb' elements of 'size' bytes
 * @nmemb: number of elements of array
 * @size: size of memory of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate bytes to p with malloc , nmemb != len */
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
