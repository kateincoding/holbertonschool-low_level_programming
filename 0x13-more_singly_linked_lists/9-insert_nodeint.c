#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *new_node;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (*head);
	tmp = *head;
	while (tmp->next)
	{
		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (*head);
			tmp2 = tmp->next;
			tmp->next = new_node;
			new_node->n = n;
			new_node->next = tmp2;
		}
		tmp = tmp->next;
		counter++;
	}
	return (*head);
}
