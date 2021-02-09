#include "holberton.h"
/**
* print_alphabet -  this function print the alphabet
*
* Return - void
*/
void print_alphabet(void)
{
	int letter;

	letter = 'a';
	while (letter >= 'a' && letter <= 'z')
		_putchar(letter++);
	_putchar('\n');
}
