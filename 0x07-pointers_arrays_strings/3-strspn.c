#include "holberton.h"

/**
 * _strspn - count the number of bytes from accept that repits in string s
 * @s: string
 * @accept: character to check
 * Return: numbers of byte in common considering null
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, count = 1;

	while (accept[j])
	{
		for (i = 0; s[i]; i++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		j++;
	}
	return (count);
}
