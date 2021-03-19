#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: array
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - add a new node at the start of the linked list
 * @head: pointer to the first node
 * @str: content of the string for the first node
 * Return: pointer to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node = malloc(sizeof(list_t));

	if (first_node == 0)
		return (0);
	first_node->str = strdup(str);
	first_node->len = _strlen(str);
	first_node->next = *head;
	*head = first_node;
	return (first_node);
}
