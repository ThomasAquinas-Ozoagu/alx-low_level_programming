#include "main.h"

/**
 * _strcpy - copies a string using a pointer string 1 --> string 2
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		*(dest + i) = src[i];


/*   do { */
/*		*(dest + i) = src[i];*/
/*		i++;*/
/*	} while (src[i] != '\0');*/

	return (dest);
}
