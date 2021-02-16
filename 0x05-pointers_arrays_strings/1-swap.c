#include "holberton.h"

/**
*swap_int - swap input integers
*@a: first int input
*@b: second input 
*Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
