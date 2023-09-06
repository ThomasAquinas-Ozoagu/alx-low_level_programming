#include <stdlib.h>

/**
 * strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated 
 * Return: Null if nothing was created, else pointer to storage location
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int looper;


	new_str = malloc(sizeof(str));
	if (new_str == NULL || str == NULL)
		return (NULL);

	looper = 0;
	while (str[looper] != '\0')
	{
		new_str[looper] = str[looper];
		looper++;
	}

	return (new_str);
}
