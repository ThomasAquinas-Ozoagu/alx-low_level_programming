#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: base string
 *
 * @src: string to be appended
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + 6 + i) = src[i];
	}

	*(dest + 7 + i) = '\0';
	return (dest);
}
