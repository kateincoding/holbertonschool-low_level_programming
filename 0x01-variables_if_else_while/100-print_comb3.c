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

	j = 0;
	for (i = '0'; i <= '9'; i++)
	{
		j = i;
		while (++j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
