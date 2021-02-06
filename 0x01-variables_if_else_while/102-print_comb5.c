#include <stdio.h>

/**
 * main - program that prints combinations numbers 00  99
 *
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
	int i, j, m, n;

	i = j = n = '0';
	for (m = '0'; m <= '9'; m++)
	{
		while (n <= '9')
		{
			i = m;
			if (n < '9')
				j = n + 1;
			else
				j = '0';
			while (i <= '9')
			{
				while (j <= '9' && j >= '0')
				{
					putchar(m);
					putchar(n);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (m == '9' && n == '8' && i == '9' && j == '9')
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
					j++;
				}
				i++;
				j = '0';
			}
			n++;
		}
		n = '0';
	}
}
