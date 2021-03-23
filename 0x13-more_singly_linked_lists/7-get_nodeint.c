#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node
 * @head: pointer to head of linked list
 * @index: index of nth node
 * Return: node or NULL in the case, doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (node == index)
			return (head);
		head = head->next;
		node++;
	}
	return (NULL);
}
