#include "lists.h"

/**
 * pop_listint - function that deletes the head node of LL
 * @head: pointer to points to the address of the head node
 * Return: value of the head node that will be erased
 */
int pop_listint(listint_t **head)
{
	listint_t *head2;
	int value_head;

	value_head = (*head)->n;
	head2 = (*head)->next;
	free(*head);
	*head = head2;

	return (value_head);
}
