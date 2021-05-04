#include "holberton.h"

/**
 * _isalpha - function that indicates if is a letter, lowercase or uppercase
 * @c: Character to validate
 * Return: 1 if is true; 0 false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
