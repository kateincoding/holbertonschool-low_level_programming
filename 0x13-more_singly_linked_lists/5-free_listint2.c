#include "lists.h"

/**
 * free_listint2 - free a LL and sets head to NULL
 * @head: double pointer to head to allow sets head
 * Return void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return (0);
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
