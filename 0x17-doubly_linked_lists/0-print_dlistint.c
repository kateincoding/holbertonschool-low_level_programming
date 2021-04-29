#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the nodes of a double linked list
 * @h: pointer to the first node of the double linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
