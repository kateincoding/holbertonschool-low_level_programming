#include "holberton.h"

/**
 * _strstr - function that search array needle in array haystack
 * @haystack: array where the functions will search
 * @needle: array to search
 * Return: pointer to the first character of the first occurence
 * of the needle is returned. NULL: if needle not found.
 * Haystack if needle is an empty string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p;

	if (needle[i] == '\0')
		p = haystack;
	while (haystack[i] && needle[j])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			p = haystack + i;
		else
			p = 0;
		i++;
	}
	return (p);
}
