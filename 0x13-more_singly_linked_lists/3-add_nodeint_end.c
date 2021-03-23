#include "lists.h"

/**
 * add_nodeint_end - add a tail node at the last
 * @head: pointer to pointer to the head of LL
 * @n: value to assign to the new node
 * Return: pointer to node to insert
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_tmp, *node_to_insert = malloc(sizeof(listint_t));

	if (node_to_insert == 0)
		return (0);

	node_to_insert->n = n;
	node_to_insert->next = NULL;
	if (*head == NULL)
		*head = node_to_insert;
	else
	{
		head_tmp = *head;
		while (head_tmp->next != NULL)
			head_tmp = head_tmp->next;
		head_tmp->next = node_to_insert;
	}
	return (node_to_insert);
}
