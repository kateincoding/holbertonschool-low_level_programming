#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array that initializes with c
* @size: size of array
* @c: character to initialize with
* Return: pointer to the first character of array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
		*(s + i) = c;
	*(s + i) = '\0';
	return (s);
}
