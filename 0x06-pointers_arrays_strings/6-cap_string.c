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
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] + 'A' - 'a';
		}
		i++;
	}
	return (s);
}
