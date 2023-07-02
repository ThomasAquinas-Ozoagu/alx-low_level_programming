#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @c: the string to be modified.
 *
 * Return: the modified string
 *
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] = c[i] - ' ';
	}
	return (c);
}
