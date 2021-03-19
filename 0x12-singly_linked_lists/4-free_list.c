#include "lists.h"

/**
 * free_list - functions that free a linkedlist
 * @head: head of first node
 * Return: void -> free the linked list
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
