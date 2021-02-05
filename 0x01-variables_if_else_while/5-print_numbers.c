#include <unistd.h>

/**
 * main - program that prints 0123456789
 * 
 * Return: Always 0 (0 = Success)
 */
int main (void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
