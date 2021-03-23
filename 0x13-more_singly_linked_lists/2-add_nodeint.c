#include "lists.h"

/**
 * add_nodeint - Fx that create a node at the start of linked list
 * @head: pointer to pointer to head of LL
 * @n: value to assign to the new node (new head of LL)
 * Return: pointer to the new node;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_to_insert = malloc(sizeof(listint_t));

	if (node_to_insert == 0)
		return (0);

	node_to_insert->next = *head;
	node_to_insert->n = n;
	*head = node_to_insert;
	return (node_to_insert);
}
