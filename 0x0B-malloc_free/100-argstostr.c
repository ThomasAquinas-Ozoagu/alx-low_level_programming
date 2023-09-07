#include <stdlib.h>
#include <stdio.h>

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

	c_in = 0;
	c_out = 0;
	count = 0;
	while (av[c_out])
	{
		while (av[c_out][c_in] != '\0')
		{
			count++;
			c_in++;
		}
		c_out++;
	}


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
	str[count] = '\0';

	return (str);
}
