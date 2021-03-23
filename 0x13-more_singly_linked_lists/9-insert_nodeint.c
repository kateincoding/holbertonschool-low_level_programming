#include "lists.h"

/**
 * insert_nodeint_at_index - fx to add a node
 * @head: head of LL
 * @idx: index to add the new node
 * @n: value of new pointer
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_head, *prev_node, *new_node;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	/* only creating a new pointer, then we allocate and linked to the LL*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* CASE: create a node at the start */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp_head = *head;
	while (tmp_head)
	{
		if (counter == idx)
		{
			new_node->next = tmp_head;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = tmp_head;
		tmp_head = tmp_head->next;
		counter++;
	}
	/*case: add a node at the final
	*if (counter == idx)
	*{
	*	prev_node->next = new_node;
	*	return (new_node);
	*}*/
	/*erase node when idx is not find it */
	free(new_node);
	return (NULL);
}
