#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: Null if nothing was created, else pointer to storage location
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int looper, count;

	for (count = 0; str[count] != '\0'; count++)
		;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(str[0]) * count);
	if (new_str == NULL)
		return (NULL);

	looper = 0;
	while (looper < count)
	{
		new_str[looper] = str[looper];
		looper++;
	}
	new_str[count] = '\0';

	return (new_str);
}
