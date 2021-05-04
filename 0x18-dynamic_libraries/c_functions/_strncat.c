#include "holberton.h"

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
