#include "main.h"


/**
 * _strncpy - that copies a string src to dest starting from n
 *
 * @dest: base string
 *
 * @src: string to be appended
 *
 * @n: The number of src strings to be used
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

/*	for (j = 0; dest[j] != '\0'; j++)*/

	for (k = 0; src[k]; k++)
		;

	if (k > n)
	{
		for (i = 0; i < n ; i++)
		{
			*(dest + i) = src[i];
		}
	}
	else
	{
		for (i = 0; i < k ; i++)
		{
			*(dest + i) = src[i];
		}
		*(dest + k) = '\0';
	}

	return (dest);
}
