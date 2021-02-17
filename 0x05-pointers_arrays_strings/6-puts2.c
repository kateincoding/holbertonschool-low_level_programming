#include "holberton.h"

/**
*puts2 - prints the number % 2 == 0
*@str - string
*Return: void
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
