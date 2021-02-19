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
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = _strlen(dest);
	j = 0;
	while (src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/**
*_strcat - function to add src to dest
*@dest: dest
*@src: source
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	return (_strncat(dest, src, _strlen(src)));
}
