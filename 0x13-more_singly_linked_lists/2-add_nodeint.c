#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a listint_t list
 *
 * @head: the head of the list
 * @n: the integer content of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *trav;

	trav = malloc(sizeof(listint_t));
	if (trav == NULL)
		return (NULL);

	trav->n = n;
	trav->next = *head;
	*head = trav;

	trav = NULL;
	free(trav);
	return (*head);
}
