#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated
 *
 * Return: Returns NULL if str = NULL
 *
 */

char *_strdup(char *str)
{
	int m = 0;
	int n, o;
	char *ing;

	if (str == NULL)
		m = 1;
	else
	{
		n = 0;
		while (str[n])
			n++;

		ing = malloc(n * sizeof(char));

		o = 0;
		while (o < n)
		{
			ing[o] = str[o];
			o++;
		}
	}
	if (m > 0)
		return (NULL);
	return (ing);
}
