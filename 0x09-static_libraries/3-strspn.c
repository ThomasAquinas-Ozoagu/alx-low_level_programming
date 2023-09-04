#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string to be worked on
 *
 * @accept: the bytes to be identified
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k, h = 0;

	while (s[i])
	{

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}

		}
		if (k > h)
			h = k;
		else
			break;
		i++;
	}
	return (k);
}
