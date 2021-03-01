#include "holberton.h"
/**
 * _isupper - Checked if c is a upper character
 * @c: letter in ascii to evaluate
 * Return: (1) if c iS uppercase (0) otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
