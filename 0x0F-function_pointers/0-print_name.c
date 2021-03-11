#include "function_pointers.h"
/**
 * print_name - function that print a 'name' with a pointer to function
 * @name: name to printf
 * @f: pointer to function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
