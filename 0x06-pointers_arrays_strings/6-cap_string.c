#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the string to be modified.
 *
 * Return: the modified string.
 *
 */

char *cap_string(char *str)
{
	int i;
	int alpha = 0;

	for (i = 0; str[i]; i++)
	{
		if ((i == 0) && ((str[i] > 96 && str[i] < 123)))
			{
				str[i] -= ' ';
			}
			else if (alpha == 1)
			{
				if (str[i] > 96 && str[i] < 123)
					str[i] -= ' ';
				alpha = 0;
			}
			else if (str[i] == 9 || str[i] == 10 || str[i] == 32)
				alpha = 1;
			else if (str[i] == 33 || str[i] == 40 || str[i] == 41)
				alpha = 1;
			else if (str[i] == 44 || str[i] == 46 || str[i] == 59)
				alpha = 1;
			else if (str[i] == 63 || str[i] == 123 || str[i] == 125)
				alpha = 1;
			else if (str[i] == 34)
				alpha = 1;
	}
	return (str);
}
