#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - a new instance of dog
 *
 * @name: the dog's name
 *
 * @age: the dog's age
 *
 * @owner: the dog's owner
 *
 * Return: The new instance
 *
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return (dog1);
}
