#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size of memory
 *
 * Return: if malloc fails, the malloc_checked function should cause norma
 * process termination with a status value of 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
