#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that adds a new node
 *
 * @head: the head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *trav;

	while (head != NULL)
	{
		trav = head->next;
		free(head);
		head = trav->next;
		free(trav);
	}
}
