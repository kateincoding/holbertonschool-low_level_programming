#include "3-calc.h"

/**
 * get_op_func - fx that select the correct fx
 * @s: operator to passed to the fx
 * Return: pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n"), exit(99);
}
