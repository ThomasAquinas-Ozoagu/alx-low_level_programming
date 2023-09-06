#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: dimension of array
 * @c: array name
 * Return: Null if nothing was created, else pointer to storage location
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int looper;
	char fill = c;

	new_array = malloc(sizeof(fill) * size);
	if (new_array == NULL || size == 0)
		return (NULL);

	looper = 0;
	while (looper < size)
	{
		new_array[looper] = fill;
		looper++;
	}

	return (new_array);
}
