#include "lists.h"

/**
 * insert_nodeint_at_index - fx to add a node
 * @head: head of LL
 * @idx: index to add the new node
 * @n: value of new pointer
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *new_node;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
                        if (new_node == NULL)
                                return (NULL);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
	{
		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			tmp2 = tmp->next;
			tmp->next = new_node;
			new_node->n = n;
			new_node->next = tmp2;
			return (new_node);
		}
		tmp = tmp->next;
		counter++;
	}
	return (NULL);
}
