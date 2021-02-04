#include <unistd.h>
#include <stdlib.h>
/**
 * main -Entry point of the program that writes this phrase
 *
 * Return: Always 1 (indication of exercise)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
