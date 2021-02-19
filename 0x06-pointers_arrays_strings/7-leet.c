#include "holberton.h"

/**
 * leet - encodes a string 1337
 * s: string to encode
 * Return: s encoded
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	
	while (s[i])
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
				s[i] = encode[j];
		}
		i++;
	}
	return (s);
}
