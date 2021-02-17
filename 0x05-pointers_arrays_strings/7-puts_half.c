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
*puts_half - print the last half of the string
*@str: array
*Return: void
*/
void puts_half(char *str)
{
	int length;
	int i;

	length = _strlen(str);
	if (length % 2 != 0)
		i = (length - 1) / 2;
	else
		i = length / 2;
	while (str[i])
		_putchar(str[i++]);
	_putchar('/0');
	_putchar('\n');
}
