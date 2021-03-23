#include "lists.h"

/**
 * listint_len - returns the number of nodes in likedlist
 * @h: pointer to head of the liked list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
