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
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}
