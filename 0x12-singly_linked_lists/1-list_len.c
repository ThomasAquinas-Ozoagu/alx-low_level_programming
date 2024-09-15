#include <stddef.h>
#include "lists.h"
#include <stdio.h>


/**
 * list_len - counts the elements of a list_t list.
 *
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *scan = NULL;

	count = 0;
	scan = h;

	while (scan != NULL)
	{
		count++;
		scan  = scan->next;
	}

	return (count);
}
