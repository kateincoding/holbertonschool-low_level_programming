#include "holberton.h"

/**
 * _strlen_recursion - Return length
 * @s: string
 * Return: length / 0 if s is empty
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
