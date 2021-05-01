#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - calculate the number of nodes in a double linked lists
 * @h: pointer to the first node of the double linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
