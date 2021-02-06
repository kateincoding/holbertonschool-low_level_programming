#include <stdio.h>

/**
 * main - program that prints combinations numbers 00  99
 *
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			n = j + 1;
			for (m = i ; m <= '9' ; m++)
			{
				while (n <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i == '9' && j == '8' && m == '9' && n == '9')
						break;
					putchar(',');
					putchar(' ');
					n++;
				}
				n = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
