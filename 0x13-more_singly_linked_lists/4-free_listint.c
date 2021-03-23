#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
