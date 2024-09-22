#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: the head of the list
 * @n: the integer content of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav;
	listint_t *tail = malloc(sizeof(listint_t));


	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
	} else
	{
		trav = *head;
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = tail;
	}

	return (tail);
}
