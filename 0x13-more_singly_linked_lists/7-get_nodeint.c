#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * a function that returns the nth node of a listint_t linked list.
 * and returns the head node’s data (n).
 *
 * @head: the head of the list
 * @index: The position of the node whose data we shall returned
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *trav;
        int m = 0;

        if(*head == NULL)
                return (m);

        m = (*head)->n;

        trav = (*head)->next;
        free(*head);
        *head = trav;

        trav = NULL;
        free(trav);

        return (m);
}
