#include "holberton.h"

/**
 * _isdigit - Checked if c is a digit
 * @c: number in ascii to evaluate
 * Return: (1) if c is a digit (0) otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
