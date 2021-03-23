#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;

	unsigned int size = 0;

	while (tmp != NULL){
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
	return (size);
}
