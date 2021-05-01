#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_next;

	while (head)
	{
		head_next = head->next;
		free(head);
		head = head_next;
	}
}
