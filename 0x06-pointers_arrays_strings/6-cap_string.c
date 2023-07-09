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
		if ((i == 0) && (str[i] > 96 && str[i] < 123))
		{
			str[i] -= ' ';
		}
		else if (alpha > 0)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= ' ';
			}
			alpha = 0;
		}
		else if (str[i] == '!' || str[i] == '\n' || str[i] == ' ')
			alpha = 1;
		else if (str[i] == '\t' || str[i] == '(' || str[i] == ')')
			alpha = 1;
		else if (str[i] == ',' || str[i] == '.' || str[i] == ';')
			alpha = 1;
		else if (str[i] == '?' || str[i] == '{' || str[i] == '}')
			alpha = 1;
		else if (str[i] == '"')
			alpha = 1;

		if (str[i] == '\t')
			str[i] = ' ';
	}
	return (str);
}
