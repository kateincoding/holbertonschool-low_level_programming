#include <stdio.h>

/**
 * main - program that prints numbers, space, ","
 * 
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
    int number;

    number = '0';
    while (number >= '0' && number <= '9')
    {
        putchar(number);
        if (number != '9')
        {
            putchar(',');
            putchar(' ');
        }
        number++;
    }
    putchar('\n');
    return (0);
}
