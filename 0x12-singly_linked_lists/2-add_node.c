#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * add_node -  adds a new node at the beginning of a list_t list
 *
 * @head: the head of the list
 *
 * @str: the data in each element of the list
 *
 * Return: the number of elements in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *adder = malloc(sizeof(list_t));

	adder->str = strdup(str);
	adder->len = strlen(str);
	adder->next = *head;
	*head = adder;
	return (*head);
}
