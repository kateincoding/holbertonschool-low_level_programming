#include "holberton.h"

/**
 * cap_string - capitalize string
 * @s: string to capitalize
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] + 'A' - 'a';

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] + 'A' - 'a';
		}
		i++;
	}
	return (s);
}
