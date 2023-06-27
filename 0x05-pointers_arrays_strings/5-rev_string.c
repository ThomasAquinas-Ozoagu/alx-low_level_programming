#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 */

void rev_string(char *s)
{
	int l, m, n;
	int o = 0;
	int count = 0;
	int rev = 0;
	char p[1000];

	for (n = 0; s[n] != '\0'; n++)
	{
		count++;
		rev++;
	}
	count--;
	for (m = count; m >= 0; m--)
	{
		p[o] = s[m];
		o++;
	}


	rev--;
	for (l = rev; l >= 0; l--)
	{
		s[l] = p[l];
	}

}
