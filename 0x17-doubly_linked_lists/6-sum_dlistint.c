#include "lists.h"

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