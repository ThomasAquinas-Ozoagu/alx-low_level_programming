#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * and returns the head node’s data (n).
 *
 * @head: the head of the list
 * Return: Sum, else if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{

	int m = 0;
	listint_t *trav;
	listint_t *temp = head;


/*	printf("one"); */
	if (temp == NULL)
		return (0);

/*	printf("two"); */

	while (temp != NULL)
	{
		m += temp->n;
		trav = temp->next;
		temp = trav;
	}
/*	printf("three"); */
/*	free(trav); */
	return (m);
}
