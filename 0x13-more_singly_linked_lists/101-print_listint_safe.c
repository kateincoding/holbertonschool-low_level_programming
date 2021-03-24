#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list only one time
 * @head: head of LL
 * Return: counter of nodes & prints an error if the linked list is a circle
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *mark_head;
	unsigned int counter = 0;

	if (head == NULL)
		return (0);
	mark_head = head;
	while (head->next != mark_head && head->next != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		if (head < head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}
	return (counter);
}
