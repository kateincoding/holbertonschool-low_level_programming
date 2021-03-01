#include "holberton.h"

/**
*_puts - write a function that write a array using write
*@str: input string
*Return: void
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
