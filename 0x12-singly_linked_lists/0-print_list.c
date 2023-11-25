#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: the string constant data of the struct
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
