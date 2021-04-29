#include "lists.h"

/**
 * sum_dlistint - sum all the nodes of double linked list
 *
 * @head: pointer to first node of DLL
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
