#include <stdio.h>

/**
 * main - program that prints 0123456789 with putchar
 * 
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
    int number;

    number = '0';
    while (number >= '0' && number <= '9')
        putchar(number++);
    putchar('\n');
    return (0);
}
