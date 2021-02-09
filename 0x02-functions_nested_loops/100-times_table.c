#include "holberton.h"

/**
 * print_times_table - Generate a table of n
 * @n: number input to do a its table
 * Return : void
 */

void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
			break;
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (j * i <= 99)
				{
					_putchar(' ');
					if (j * i <= 9)
						_putchar(' ');
				}
			}
			if (j * i > 99)
			{
				_putchar (i * j / 100 + '0');
				_putchar ((i * j - (i * j / 100) * 100) / 10 + '0');
			}
			else if (j * i > 9)
				_putchar (i * j / 10  + '0');
			_putchar (i * j % 10 + '0');
		}
		_putchar('\n');
	}
}
