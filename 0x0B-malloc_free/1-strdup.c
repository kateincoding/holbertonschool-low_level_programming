#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the string str and return a pointer
 * @str: string to duplicate
 * Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	i = 0;
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
