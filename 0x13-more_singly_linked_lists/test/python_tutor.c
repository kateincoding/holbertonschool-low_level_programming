#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
        const listint_t *tmp = h;

        unsigned int size = 0;

        while (tmp != NULL)
        {
                printf("%d\n", tmp->n);
                tmp = tmp->next;
                size++;
        }
        return (size);
}

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

void free_listint2(listint_t **head)
{
        if (*head == NULL)
        {
                return;
        }
        free_listint2(&(*head)->next);
        free(*head);
        *head = NULL;
}

int main() {
 
 listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head); 
  return 0;
}
