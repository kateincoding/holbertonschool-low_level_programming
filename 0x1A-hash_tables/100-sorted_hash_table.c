#include "hash_tables.h"
#include <ctype.h>

/**
 * shash_table_create - hash table create function
 * @size: size of HT
 *
 * Return: hash value
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;

	if (size <= 0)
		return (NULL);

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);

	shash_table->size = size;
	shash_table->array = calloc(size, sizeof(shash_node_t *));
	if (!(shash_table->array))
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * add_sorted_node - link the new_node to the double linked list
 * @ht: hash table
 * @new_node: new_node to vincule
 *
 * Return: void
 */
void add_sorted_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *next_shash = NULL, *shash_node = NULL;

	/* case 1: add the first node or first at the start of the list */
	if (!ht->shead || strcmp(new_node->key, ht->shead->key) <= 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_node;
		if (!(ht->stail))
			ht->stail = new_node;
		ht->shead = new_node;
		return;
	}
	/* step2: go to the node of array[idx] */
	shash_node = ht->shead;
	next_shash = shash_node->snext;
	while ((next_shash) && (strcmp(new_node->key, next_shash->key) > 0))
		shash_node = shash_node->snext, next_shash = next_shash->snext;
	/* locate the node and add */
	new_node->snext = next_shash;
	new_node->sprev = shash_node;

	shash_node->snext = new_node;
	if (next_shash)
		next_shash->sprev = new_node;
	else
		ht->stail = new_node;
}

/**
 * shash_table_set - set a new php hash table node to the ll
 * @ht: key
 * @key: key
 * @value: size
 *
 * Return: index
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *hash_node = NULL, *new_node = NULL;
	char *new_value = NULL, *new_key = NULL;

	if (!ht || !(ht->array) || !key || !key[0] || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	hash_node = ht->array[idx];
	while (hash_node)
	{
		if (!strcmp(hash_node->key, key))
			return (free(hash_node->value), hash_node->value = new_value, 1);
		hash_node = hash_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (free(new_value), 0);
	new_key = strdup(key);
	if (!new_key)
		return (free(new_node), free(new_value), 0);
	new_node->key = new_key, new_node->value = new_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	/*initialize sorted linked list */
	new_node->sprev = NULL, new_node->snext = NULL;
	add_sorted_node(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retrieves the value of the key in the ht
 * @ht: hash table
 * @key: key which will search its value
 *
 * Return: index
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hash_node = NULL;
	unsigned long int idx;

	if (!ht || !(ht->array) || !key || !key[0])
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[idx];

	while (hash_node != NULL)
	{
		if (!strcmp(hash_node->key, key))
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print a hash table from the double linked list
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *actual_node = NULL;

	if (!ht || !(ht->array))
		return;
	actual_node = ht->shead;
	printf("{");
	while (actual_node)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", actual_node->key, actual_node->value);
		actual_node = actual_node->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a hash table from the double linked list
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *actual_node = NULL;

	if (!ht || !(ht->array))
		return;
	actual_node = ht->stail;
	printf("{");
	while (actual_node)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", actual_node->key, actual_node->value);
		actual_node = actual_node->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete all the hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *actual_node = NULL, *next_node = NULL;

	if (!ht || !(ht->array))
		return;

	while (i < ht->size)
	{
		actual_node = ht->array[i];
		while (actual_node)
		{
			next_node = actual_node->next;
			free(actual_node->key);
			free(actual_node->value);
			free(actual_node);
			actual_node = next_node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
