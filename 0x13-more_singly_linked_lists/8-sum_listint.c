#include "lists.h"

/**
 * sum_listint - fx that calculate the sume of node's value and return it
 * @head: pointer to linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	sum = head->n + sum_listint(head->next);
	return (sum);
}
