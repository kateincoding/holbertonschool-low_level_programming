#include "lists.h"

/**
 * print_list - Print the lists
 * @h: list with format list_t
 * Return: number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	unsigned int number_nodes = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}
