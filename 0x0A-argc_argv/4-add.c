#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _isnumber - check if is number
 * @s: string
 * Return: 1 is true, 0 is false
 */
int _isnumber(char *s)
{
	int i = 0;

	if (*s == '-')
		i++;
	while (s[i])
	{
		if (isdigit(s[i++]) == 0)
			return (1);
	}
	return (0);
}

/**
 * main - is number?
 * @argc: numbers of argv
 * @argv: argument
 * Return: Always 0 if is true, 1: false: argv include not digits
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
		printf("0\n");
	printf("%d\n", sum);
	return (0);

}
