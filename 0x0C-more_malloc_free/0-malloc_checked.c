#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer of memory allocated; error: 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
