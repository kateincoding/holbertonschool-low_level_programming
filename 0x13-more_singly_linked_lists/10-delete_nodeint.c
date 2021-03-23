#include "lists.h"

/**
 * delete_nodeint_at_index - fx that erase the node of index
 * @head: pointer to the head of LL
 * @index: index of node to erase
 * Return: 1 if it is founded , -1: error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	
	unsigned int counter = 0;
	listint_t *prev_node, *tmp_head;

	if (*head == NULL || head == NULL)
		return (-1);
	/* case when we want to delete the first node */
	if (index == 0)
	{
		tmp_head = (*head)->next;
		free(*head);
		*head = tmp_head;
		return(1);
	}
	/* in the next case, we need to create 2 tmp nodes */
	/* one for run over the LL (tmp_head); other: prev_node */
	tmp_head = *head;
	while (tmp_head)
	{
		if (counter == index)
		{
			prev_node->next = (tmp_head->next);
			free(tmp_head);
			return(1);
		}
		prev_node = tmp_head;
		tmp_head=tmp_head->next;
		counter++;
	}
	return (-1);
}
