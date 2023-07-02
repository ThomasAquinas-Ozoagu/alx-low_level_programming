#include "main.h"

/**
 * _strcmp - checks two strings for equal number of bytes
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: integer 0 if equal, +15 if 1 > 2 and -15 if 2 > 1.
 */

int _strcmp(char *s1, char *s2)
{
	int j;


	for (j = 0; s1[j] || s2[j]; j++)
	{
		if (s1[j] > s2[j])
			return (15);

		else if (s1[j] < s2[j])
			return (-15);

		else
		{
			;
		}
	}

		return (0);
}
