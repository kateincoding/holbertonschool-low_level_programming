#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, flag = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
