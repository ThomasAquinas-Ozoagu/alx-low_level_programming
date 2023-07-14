#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: is the size, in bytes, of the allocated space for ptr
 *
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: nothing
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	int *ptrn;
	int *pt = (int*)ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (!new_size && pt)
	{
		free(ptr);
		return (NULL);
	}

	if (pt && (new_size > old_size || old_size > new_size))
	{
		ptrn = malloc(new_size);
		for (i = 0; (new_size > i) && (old_size > i); i++)
			     ptrn[i] = pt[i];
	}

	return ((void*)ptrn);
}
