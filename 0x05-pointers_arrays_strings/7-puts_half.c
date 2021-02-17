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
	int st;

	length = _strlen(str);

	st = ((length - 1) / 2) + 1;

	for (i = st; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
