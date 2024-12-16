#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the head of the list
 * @index: the point where the new item is to be inserted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav;
	listint_t *future;
	listint_t *past;
	listint_t *present;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	trav = *head;

	if (index == 0)
	{
		present = trav->next;
		free(trav);
		*head = present;
		if (*head == NULL)
			free(head);
		return (1);
	}
	
	count++;
	while (count < index)
	{
		trav = trav->next;
		count++;
	}
	past = trav;
	present = trav->next;
	future = present->next;

	free(present);
	past->next = future;
	return (1);
}
