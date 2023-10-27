#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares 2 strings and returns 1 if they are considered identical
 *
 * @s1: String 1
 *
 * @s2: String 2
 *
 * Return: 1 if identical and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0])
	{
/* if you encounter * in s2, do not increase s1 */
		if (s2[0] == '*')
		{
			printf("%c <---> %c\n", s1[0], s2[0]);
			return (wildcmp(s1, s2 + 1));
		}
		if (s1[0] != s2[0])
		{
			printf("%c <---> %c\n", s1[0], s2[0]);
			return (0);
		}
		if (s1[0] == s2[0])
		{
			printf("%c <---> %c", s1[0], s2[0]);
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	return (1);
}
