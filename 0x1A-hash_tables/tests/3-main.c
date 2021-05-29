#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");

    ht = hash_table_create(0);
    hash_table_set(ht, "betty", "holberton");

    ht = hash_table_create(1024);
    hash_table_set(ht, "", "holberton");

    ht = hash_table_create(1024);
    hash_table_set(ht, NULL, "holberton");

    ht = hash_table_create(1024);
    hash_table_set(ht, "hola", "");

    ht = hash_table_create(1024);
    hash_table_set(ht, "hola", NULL);
    
    return (EXIT_SUCCESS);
}
