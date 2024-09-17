#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * add_node_end -  adds a new node at the end of a list_t list
 *
 * @head: the head of the list
 *
 * @str: the data in each element of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *scan = *head;
	list_t *adder = malloc(sizeof(list_t));

	if (adder == NULL)
		return (NULL);

	adder->str = strdup(str);
	adder->len = strlen(str);
	adder->next = NULL;

	if (*head == NULL)
	{
		*head = adder;
		return (*head);
	}
	while (scan->next != NULL)
	{
		scan = scan->next;
		}
	scan->next = adder;
	return (adder);
}
