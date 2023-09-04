#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: The string we are looking for
 *
 * @accept: The string to be searched
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{

	if (s[0] == accept[0])
		return (s);
	return (accept);
}
