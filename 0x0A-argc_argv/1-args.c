#include <stdio.h>

/**
 * main - Program prints the number of argc
 * @argc: number of argv
 * @argv: arguments of program
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
