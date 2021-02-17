#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: array
 *Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
*print_rev - prints the string s in reverse
*@s: array
*Return: void
*/
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (--length >= 0)
		write(1, &s[length], 1);
	write(1, "\n", 1);
}
