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
	int count = 0;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/*initialize the new_node*/
	new_node->n = n;
	/*case1: double linked list is null */
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
	while (tmp)
	{
		if (count == idx)
		{
			new_node->prev = prev_node;
			new_node->next = tmp;
			prev_node->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		prev_node = tmp;
		tmp = tmp->next;
		count++;
	}
	/* case 3: not exist */
	if (idx >= count)
		return (NULL);
}
