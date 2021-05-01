#include "lists.h"

/**
 * add_dnodeint - add a node at the initial of the linked list
 *
 * @head: pointer to pointer to the first node of the double linked list
 * @n: value of the new_node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* initial value of new_node */
	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
	{
		new_node->next = *head;
		/* set the prev of last first node to the new_node */
		if (*head)
			(*head)->prev = new_node;
	}
	/* change the head to the address of new_node */
	*head = new_node;
	return (*head);
}
