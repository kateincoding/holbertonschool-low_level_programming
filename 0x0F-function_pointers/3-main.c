#include "3-calc.h"

/**
 * main - test with argv
 * @argc: number of argv
 * @argv: arguments input of main
 * Return: Return of operation
 */
int main(int argc, char **argv)
{
	int (*fx)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
		printf("Error\n"), exit(99);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
		printf("Error\n"), exit(100);

	fx = get_op_func(argv[2]);
	printf("%d\n", fx(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
