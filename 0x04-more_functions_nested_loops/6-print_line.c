#include "holberton.h"

/**
*print_line - function that print - n times
*@n: character n
*Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
