#include "lists.h"

/**
 * list_len - functions that calculate the number of the nodes
 * @h: linked list to evaluate
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
