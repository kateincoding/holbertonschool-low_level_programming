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
	int z;

	j = 0;
	for (i = '0'; i <= '9'; i++)
	{
		j = i;
		while (++j <= '9')
		{
			z = j;
			while (++z <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i == '7' && j == '8' && z == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
