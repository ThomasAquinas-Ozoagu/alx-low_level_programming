#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: one of the members
 * @name: one of the members
 * @age: one of the  members
 * @owner: one of the members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog (*d);
	(*d).name = name;
        (*d).age = age;
	(*d).owner = owner;

}
