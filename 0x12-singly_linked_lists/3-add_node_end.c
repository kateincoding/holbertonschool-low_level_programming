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
 * add_node_end - add a new node at the end of the linked list
 * @head: pointer to the first node
 * @str: content of the string for the first node
 * Return: pointer to the first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *tmp;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);
	
	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = end_node;
		
	return (end_node);

}
