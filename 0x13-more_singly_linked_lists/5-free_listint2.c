#include "lists.h"

/**
 * free_listint2 - free a LL and sets head to NULL
 * @head: double pointer to head to allow sets head
 * Return void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
	{
		free(*head);
		return;
	}
	free_listint2(&(*head)->next);
	*head = NULL;
}
