#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at the index of DLL
 *
 * @h: double pointer to first node of DLL
 * @idx: index where the new_node need to be add
 * @n: new-node->n = n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *tmp = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	/* checking the case if idx is between range od nodes */
	while (tmp)
		tmp = tmp->next, count++;
	if (idx > count)
		return (NULL);
	/* only add if you need to create */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	/*case1: idx = 0 , create a node at initial */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/* case2: search the index until the last node*/
	tmp = *h;
	for (count = 0; count < idx; count++)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	/* link the nodes */
	new_node->next = tmp;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
