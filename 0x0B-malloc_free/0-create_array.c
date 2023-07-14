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
	int m = 0;
	char *alpha;

	alpha = malloc(size * sizeof(char));
	if (!alpha)
		return (NULL);

	if (size == 0)
		m = 1;
	else
	{
		n = 0;
		while (n < size)
		{
			alpha[n] = c;
			if (alpha[n] != c)
				m = 1;
			n++;
		}
	}
	if (m > 0)
		return (NULL);
	return (alpha);
}
