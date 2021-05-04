#include "holberton.h"

/**
* main - Entry point of a program
*
* Return:  always 0, because is succes
*/
void _puts(char *s)
{
	write(1, s, _strlen(s));
}
