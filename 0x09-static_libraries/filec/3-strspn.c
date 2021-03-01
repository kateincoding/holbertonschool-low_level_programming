#include "holberton.h"

/**
 * _strspn - count the number of bytes from accept that repits in string s
 * @s: string
 * @accept: character to check
 * Return: numbers of byte in common considering null
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (0);
}
