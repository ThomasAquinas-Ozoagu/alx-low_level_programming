#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 *
 * @head: the head of the list
 *
 * Return: Head of the node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *trav;
	int m = 0;

	if (*head == NULL)
		return (m);

	m = (*head)->n;

	trav = (*head)->next;
	free(*head);
	*head = trav;

	trav = NULL;
	free(trav);

	return (m);
}
