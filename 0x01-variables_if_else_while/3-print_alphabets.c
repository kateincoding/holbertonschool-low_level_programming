#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase and uppercase\n
 * 
 * Return: Always 0 (0 = Success)
 */
int main (void)
{
    int letter;

    letter = 'a';
    while (letter >= 'a' && letter <= 'z')
        putchar(letter++);
    letter = 'A';
    while (letter >= 'A' && letter <= 'Z')
        putchar(letter++);
    putchar('\n');
    return (0);
}
