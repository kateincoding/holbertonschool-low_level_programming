#include <stdio.h>

/**
 * main - program that prints numbers of base 16
 * 
 * Return: Always 0 = Success
 */
int main(void)
{
    int number;

    number = '0';
    while (number >= '0' && number <= '9')
        putchar(number++);
    number = 'a';
    while (number >= 'a' && number <= 'f')
        putchar(number++);
    putchar('\n');
    return (0);
}
