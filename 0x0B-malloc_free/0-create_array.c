#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
		*(s + i) = c;
	return (s);
}
