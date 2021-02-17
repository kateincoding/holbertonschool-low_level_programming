#include "holberton.h"

/**
*rev_string - function that reverse the string
*@s: string
*Return: void
*/
void rev_string(char *s)
{
	int i;
	char tmp;
	int length;

	i = 0;
	while (s[i])
		i++;
	length = i;
	i = 0;
	while (i <= length)
	{
		length--;
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
		i++;
	}
}
