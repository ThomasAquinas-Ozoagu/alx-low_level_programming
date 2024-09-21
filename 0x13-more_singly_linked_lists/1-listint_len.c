#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print_listint - prints all the elements of a listint_t list.
 *
 * @h: the head of the list
 *
 * Return: the number of elements
 *
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *trav = h;

	if (h == NULL)
		return (0);

	while (trav != NULL)
	{
		count += 1;
		trav = trav->next;
	}
	return (count);
}
