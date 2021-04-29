#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * @head: pointer to pointer to the first node of the double linked list
 * @n: value of the new_node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *head_tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
