#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
