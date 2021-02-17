#include "holberton.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (--length >= 0)
		write(1, &s[length], 1);
	write(1, "\n", 1);
}
