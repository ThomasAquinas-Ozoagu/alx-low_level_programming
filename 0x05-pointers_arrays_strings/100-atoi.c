#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 *
 * @s: string to be converted to integer
 *
 *
 * Return: the pointer to dest
 */

int _atoi(char *s)
{
	int i;
	int j = 0;
	int k = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((int)s[i] > 47 && (int)s[i] < 58)
		{
/*			printf("%c \n", s[i]);*/
/*			printf("value of j b4 Int %d \n", j);*/
			j = ((j * 10) + ((int)s[i] - 48));
/*			printf("value of j after Int %d \n", j);*/
		}
		if ((int)s[i] == 45)
			k = k * -1;
		if (j > 0 && ((int)s[i] < 47 || (int)s[i] > 58))
			break;
	}

	return (j * k);
}
