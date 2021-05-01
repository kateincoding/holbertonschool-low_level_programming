#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the index of DLL
 *
 * @head: double pointer to first node of DLL
 * @index: index where the node will be free
 * Return: if EXIT_SUCCESS:1 ; other -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *head_tmp, *prev_node;

	if (!head || !(*head))
		return (-1);

	/*case1: first node*/
	if (index == 0)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	/*case2: middle*/
	head_tmp = *head;

	while (head_tmp)
	{
		if (counter == index)
		{
			/* if it is the last, the next is to NULL*/
			prev_node->next = (head_tmp->next);
			if (head_tmp->next)
				(head_tmp->next)->prev = prev_node;
			free(head_tmp);
			return (1);
		}
		prev_node = head_tmp;
		head_tmp = head_tmp->next;
		counter++;
	}
	/* if index >= counter because the while ends, the return is -1 */
	return (-1);
}
