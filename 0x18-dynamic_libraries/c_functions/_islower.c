#include "holberton.h"

/**
 * _islower - function that indicates if alphabet lowercase
 * @c: Character to validate
 * Return: 1 if is lowercase; 0 othewhise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
