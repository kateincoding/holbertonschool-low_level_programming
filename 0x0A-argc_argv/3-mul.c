#include <stdlib.h>
#include <stdio.h>

/**
 * main - priduct of 2 numbers
 * @argc: numbers of argv
 * @argv: argument
 * Return: Always 0 if is true, 1: false: more than 2 numbers
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
