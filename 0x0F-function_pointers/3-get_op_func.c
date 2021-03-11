#include "3-calc.h"

/**
 * get_op_func - fx that select the correct fx
 * @s: operator to passed to the fx
 * Return: pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while ((ops[i].op[0] != s[i]) && i <= 5)
		i++;

	return (ops[i].f);
}
