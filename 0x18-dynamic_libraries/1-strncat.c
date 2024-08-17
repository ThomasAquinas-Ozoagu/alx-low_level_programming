#include "main.h"

/**
 * _strncat - concatenates two strings using n number of characters from src.
 *
 * @dest: base string
 *
 * @src: string to be appended
 *
 * @n: The number of src strings to be used
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (k = 0; src[k] != '\0'; k++)
		;

	if (k < n)
	{
		for (i = 0; i < k; i++)
		{
			*(dest + j + i) = src[i];
		}
		*(dest + j + i) = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*(dest + j + i) = src[i];
		}
	}

	return (dest);
}
