#include "holberton.h"

/**
 *print_triangle - print a triangle of length n
 *@size: size of triangle
 *Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int triangle;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' ');
			for (triangle = 1; triangle <= i; triangle++)
				_putchar('#');
			_putchar('\n');
		}
}
