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
		int i = 0, j = 0;

		while (dest[i])
			i++;
		while (src[j] && j < n)
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (dest);
}
