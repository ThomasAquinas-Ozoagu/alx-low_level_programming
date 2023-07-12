#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 *
 * @size: The size of the array
 *
 * @c: the character to initialize it with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *alpha;

	alpha = malloc(size * sizeof(char));

	n = 0;
	while (n < size)
	{
		alpha[n] = c;
		if (alpha[0] != c)
			return (0);
		n++;
	}

	return (alpha);
}
