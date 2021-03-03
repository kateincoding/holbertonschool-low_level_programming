#include "holberton.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		*(p + i) = s1[i];
		i++;
	}
	while (s2[j])
	{
		*(p + i) = s2[j];
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
