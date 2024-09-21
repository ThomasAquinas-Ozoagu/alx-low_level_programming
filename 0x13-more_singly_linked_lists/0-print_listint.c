#include <unistd.h>
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
	int val = 5;
	const listint_t *trav = h;

	if (h == NULL)
		return (0);

	while (trav != NULL)
	{
		val = trav->n;
		if (val > 999)
		{
			_putchar('0' + (val / 1000));
			val = val % 1000;
		}

		if (val > 99)
		{
			_putchar('0' + (val / 100));
			val = val % 100;
		}

		if (val > 9)
		{
			_putchar('0' + (val / 10));
			val = val % 10;
		}

		if (val < 10)
			_putchar('0' + val);
		_putchar('\n');
		count += 1;
		trav = trav->next;
	}
	return (count);
}
