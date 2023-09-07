#include <stdlib.h>
#include <stdio.h>

/**
 * chk_size - counts a 2 dim array
 * @avr: array to be counted
 * Return: the size
 */

int chk_size(char **avr)
{
	int count, c_in, c_out;

	c_in = 0;
	c_out = 0;
	count = 0;
	while (avr[c_out])
	{
		while (avr[c_out][c_in] != '\0')
		{
			count++;
			c_in++;
		}
		c_out++;
	}
	return (count);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: number of strings
 *
 * @av: an array of strings
 *
 * Return: the concatenation
 */

char *argstostr(int ac, char **av)
{
	int conc, count, c_in, c_out;
	char *str;


	if (ac == 0 || av == NULL)
		return (NULL);

	count = chk_size(av);
	str = malloc(sizeof(char) * (count + ac + 1));
	if (!str)
		return (NULL);


	c_out = 0;
	conc = 0;
	while (av[c_out])
	{
		c_in = 0;
		while (av[c_out][c_in])
		{
			str[conc] = av[c_out][c_in];
			c_in++;
			conc++;
		}
		c_out++;
		str[conc] = '\n';
		conc++;
	}
	str[conc] = '\0';

	return (str);
}
