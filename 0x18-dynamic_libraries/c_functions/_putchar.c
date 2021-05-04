#include <unistd.h>
#include "holberton.h"

void _putchar(char c)
{
	write(1, &c, 1);
}
