#include "holberton.h"

/**
 *_strcmp - compare each character between s1 and s2
 *@s1: string 1
 *@s2: string 2
 *Return: 0 is is equal or the difference of s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (!s1[i] || !s2[i])
		return (0);
	return (s1[i] - s2[i]);
}
