#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: the head of the list
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *trav = h;

	if (h == NULL)
		return(0);

	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		count += 1;
		trav = trav->next;
	}

	return (count);
}
