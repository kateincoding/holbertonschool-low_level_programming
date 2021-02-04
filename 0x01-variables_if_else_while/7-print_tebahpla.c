#include <stdio.h>

/**
 * main - program that prints alphabet in reverse\n
 * 
 * Return: Always 0 (0 = Success)
 */
int main(void)
{
    int letter;

    letter = 'z';
    while (letter >= 'a' && letter <= 'z')
        putchar(letter--);
    putchar('\n');
    return (0);
}
