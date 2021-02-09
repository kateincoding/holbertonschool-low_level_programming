#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - function that print numbers between n and 98
 *@n: input number
 *Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);
	while (n > 98)
		printf("%d, ", n--);
	if (n == 98)
		printf("%d\n", n);
}
