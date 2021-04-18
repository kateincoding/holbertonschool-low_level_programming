#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i = 0, j, k;

    if (size <= 0 )
        printf("\n");
    else while (i <= size)
    {
        printf("%08x: ", i);
        j = i;
        for (k = 0; k < 10; k++)
        {
            if (i < size)
            {
                if (b[i] == '\0'|| b[i] < 10 || b[i] >= 127)
                    printf("00");
                else
                    printf("%02x", b[i]);
            }
            else 
                printf("  ");
            i++;
            if (i % 2 == 0)
                printf(" ");
            if (i % 10 == 0)
                break;
        }
        while(j < size)
        {
            if (b[j] == '\0'|| b[j] < 32 || b[j] >= 127)
                printf(".");
            else
                printf("%c", b[j]);
            j++;
            if (j % 10 == 0)
                break;
        }
        printf("\n");
    }
}
