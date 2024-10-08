#include <stdlib.h>
#include "lists.h"



/**
 * free_list -  frees a list_t list.
 *
 * @head: the list
 */

void free_list(list_t *head)
{

	list_t *scan;

	while (head != NULL)
	{
		scan = head;
		head = head->next;
		free(scan->str);
		free(scan);
	}

}
