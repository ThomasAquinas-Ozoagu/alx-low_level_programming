#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * a function that returns the nth node of a listint_t linked list.
 * and returns the head node’s data (n).
 *
 * @head: the head of the list
 * @index: The position of the node whose data we shall returned
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int m = 0;
        listint_t *trav;
	listint_t *temp = head;


/*	printf("one"); */
        if(temp == NULL)
                return (NULL);

/*	printf("two"); */

	if (index == 0)
		return (temp);
	while (m < index)
	{
		trav = temp->next;
		temp = trav;
	 	if (temp == NULL)
			return (NULL);
	 	m += 1;
	}
/*	printf("three"); */
/*	free(trav); */
        return (temp);
}
