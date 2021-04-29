#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    int count;

    if (!head)
        return (NULL);

    while (head)
    {
        head = head->next;
        count++;
        if (count == index)
            return (head); 
    }

    if (count <= index)
        return (NULL);
}
