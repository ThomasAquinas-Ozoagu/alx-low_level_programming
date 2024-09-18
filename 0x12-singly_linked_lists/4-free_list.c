#include <stdlib.h>
#include "lists.h"



/**
 * free_list -  frees a list_t list.
 */

void free_list(list_t *head)
{

	list_t *scan;

	while (head->next != NULL)
	{
		scan = head;
		head = head->next;
		free(scan);
	}
	free(head);
}
