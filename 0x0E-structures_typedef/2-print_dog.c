#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 *
 * @d: the struct to be printed
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			(*d).name = "nil";
		if ((*d).age == 0)
			(*d).age = 0;
		if ((*d).owner == NULL)
			(*d).owner = "nil";

		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age,
		       (*d).owner);
	}
}
