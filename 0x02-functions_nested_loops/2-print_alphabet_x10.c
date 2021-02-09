#include "holberton.h"
/**
* print_alphabet_x10 -  this function print the alphabetx10`
*
* Return - void
*/
void print_alphabet_x10(void)
{
	int letter;
	int i;

	letter = 'a';
	for (i = 0; i <= 9; i++)
	{
		while (letter >= 'a' && letter <= 'z')
			_putchar(letter++);
		_putchar('\n');
		letter = 'a';
	}
}
