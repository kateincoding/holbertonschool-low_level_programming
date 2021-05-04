#include "holberton.h"

/**
*_strcpy - function that copies the string pointed
*@dest: pointer to array
*@src: source array to copy
*Return: char dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
