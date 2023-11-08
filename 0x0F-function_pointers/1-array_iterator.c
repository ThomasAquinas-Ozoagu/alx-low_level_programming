#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: the array
 * @size: the size of the array
 * @action: the function to be executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
