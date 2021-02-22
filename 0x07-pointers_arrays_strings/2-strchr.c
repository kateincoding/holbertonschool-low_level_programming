#include "holberton.h"

/**
 * _strchr - find the char in string
 * @s: string
 * @c: char
 * Return: pointer to the rest od string
 */
char *_strchr(char *s, char c)
{
	int size_l = 0, i = 0;
	char *p;

	while (s[i])
	{
		if (c == s[i])
		{
			p = s + i;
			break;
		}
		p = 0;
		size_l++;
	} else
		p = 0;
	return (p);
}
