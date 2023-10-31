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
	int count, k, l = 0, m, n = 0;
	int x, y = 0, z = 0, a = 0;
	char **_words;

	/* count the number of words in the str */
	count = _counter(str);

	/* allocate memory for that size to a variable _words*/
	_words = malloc(sizeof(char) * count);
	/* check if malloc worked */
	if (_words == NULL)
		return (NULL);

	/* cycle through the chracters, and allocate space for each word */

	for (k = 0; str[k] != '\0'; k++)
	{
		l++;
		if (str[n] == '"') /*check for compound word*/
			n++;

		if ((str[k] == ' ') && (n % 2 == 0))
		{
			_words[m] = malloc(sizeof(char) * (l + 1));
			m++;
			l = 0;
		}

	}

	/* set content of each word */
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == '"') /*check for compound word*/
			a++;

		if ((str[x] == ' ') && (a % 2 == 0))
		{
			_words[y][z + 1] = '\0';
			y++;
			z = 0;
		}
		else
		{
			_words[y][z] = str[x];
			z++;
		}
	}
	return (_words);
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
		if (_str[i] == '"')
			h++;
		if ((_str[i] == ' ') && (h % 2 == 0) && (i > 0))
			j++;
	}
	return (j);
}
