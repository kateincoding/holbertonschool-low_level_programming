#include "holberton.h"

/**
* main -Entry ppint of programs that print Holberton with putchar
*
* Return: Always 0
*/
int main(void)
{
	int i;
	char word[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	i = 0;
	while (i <= 8)
		_putchar(word[i++]);
	_putchar('\n');
	return (0);
}
