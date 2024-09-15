#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a new instance of dog
 *
 * @d: the dog's name
 *
 *
 */

void free_dog(dog_t *d)

{
	free(d);
}
