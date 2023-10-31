#include "main.h"
#include <stdlib.h>
int _counter(char *_str);

/**
 * strtow - returns a pointer to an array of strings (words)
 *
 * @str: the string to be split into words
 *
 * Return: a pointer to an array of strings (words) or NULL if failure
 */

char **strtow(char *str)
{
	/* declare variables */
	int count, k, l;
	char *out_str;

	/* count the number of characters in the str */
	count = _counter(str);

	/* allocate memory for that size to a variable words*/
	out_str = malloc(sizeof(char) * count);
	/* check if malloc worked */
	if (out_str == NULL)
		return (NULL);

	/* cycle through the chracters, replace every space with \0\n)*/
	k = 0;
	l = 0;
	while (l < count)
	{
		/* terminate program if string is out of range */
		if (!out_str[l] || !str[k])
			return (NULL);

		if (str[k] == ' ')
		{
			out_str[l] = '\0';
			l++;
			out_str[l] = '\n';
		}
		else
			out_str[l] = str[k];
		k++;
		l++;
	}

	/* return pointer to the resulting string */
	return (out_str);
}


/**
 * _counter - checks number of words in a string
 * @_str: string to be checked
 * Return: number of chars
 */

int _counter(char *_str)
{
	int h = 0, i, j = 0;

	for (i = 0; _str[i] != '\0'; i++)
	{
		if (str[i] == '"')
			k++;
		if ((str[i] == ' ') && (k % 2 == 0))
			j++;
	}
	return (j);
}
