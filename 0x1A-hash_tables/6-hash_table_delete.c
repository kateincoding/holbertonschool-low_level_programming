#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;

	while (ht->array[i])
	{
		while (ht->array[i])
		{
			tmp = (ht->array[i])->next;
			free((ht->array[i])->key);
			free((ht->array[i])->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
