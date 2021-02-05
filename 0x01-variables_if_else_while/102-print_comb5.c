#include <stdio.h>

/**
 * main - program that prints numbers 00 - 99
 *
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
	int i;
	int j;
	int m;
	int n;

	i = 0;
	j = 0;
	n = 0;
	for (m = '0'; m <= '9'; m++)
	{
		while (n <= '9')
		{
			i = m;
			while (i <= '9')
			{
				j = n;
				while (++j <= '9')
				{
					putchar(m);
					putchar(n);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (m == '9' && n == '8' && i == '9' && j == '9')
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			n++;
		}
	}
	putchar('\n');
	return (0);
}
