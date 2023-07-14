#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using calloc.
 *
 * @nmemb: firt arg
 *
 * @size: size of memory
 *
 * Return: void
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!nmemb || !size)
		return (NULL);
	return (calloc(nmemb, size));
}
