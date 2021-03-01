#include <stdio.h>

/**
 * main - print all entry array followed by \n
 * @argc: number of argv
 * @argv:  srguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
