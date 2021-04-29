#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the linked list
 *
 * @head: pointer to pointer to the first node of the double linked list
 * @n: value of the new_node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* initialize the new_node */
	new_node->n = n;
	new_node->next = NULL;
	/*we need the address of the last node to set in the new_node->prev */
	/* case1: empty DLL: address of first node is empty*/
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* case2: searching the last address of the DLL */
	while (last_node->next)
		last_node = last_node->next;
	/* set the prev of new_node */
	new_node->prev = last_node;
	/* reset the next of the last_node */
	last_node->next = new_node;
	return (new_node);
}
