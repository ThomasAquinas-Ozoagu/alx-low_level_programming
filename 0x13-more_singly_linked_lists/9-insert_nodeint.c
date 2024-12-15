#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 *  inserts a new node at a given position
 *
 * @head: the head of the list
 * @idx: the point where the new item is to be inserted
 * @n: the integer content of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav;
	listint_t *hold;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		return NULL;
	} else
	{
		trav = *head;
		count++;
		while (count < idx)
		{
			trav = trav->next;
			count++;
		}
		hold = trav->next;

		trav->next = new;
		new->next = hold;
	}

	return (new);
}
