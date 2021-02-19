#include "holberton.h"

/**
 * string_toupper - capitalize the string
 * @s: string
 * Return: stringe changed
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
		i++;
	}
	return (s);
}
