#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: The string to be converted
 *
 * Return: The converted string
 *
 */

char *leet(char *s)
{
	int r;

	for (r = 0; s[r]; r++)
	{
		if (s[r] == 'a' || s[r] == 'A')
			s[r] = 52;
		else if (s[r] == 'e' || s[r] == 'E')
			s[r] = 51;
		else if (s[r] == 'o' || s[r] == 'O')
			s[r] = 48;
		else if (s[r] == 't' || s[r] == 'T')
			s[r] = 55;
		else if (s[r] == 'l' || s[r] == 'L')
			s[r] = 49;
	}
	return (s);
}
