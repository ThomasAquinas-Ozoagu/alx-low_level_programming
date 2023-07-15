#include <stdio.h>
#include <errno.h> /* for errno */
#include <limits.h> /* for INT_MAX, INT_MIN*/
#include <stdlib.h> /* for strtol*/

/**
 * main - multiplies two numbers.
 *
 * @argc:  number of inputs
 *
 * @argv: numbers to be multiplied
 *
 * Return: 0 if aliswel
 */

int main(int argc, char *argv[])
{
	char *p;
	long *num;
	int i, j, ret = 0;
	long *conv;
	long sum = 0;


	if (argc < 2)
	{
		printf("0\n");
		ret = 1;
	}
	else
	{
		errno = 0;
		num = malloc(sizeof(long) * argc);
		conv = malloc(sizeof(long) * argc);
		for (i = 1; i < argc; i++)
		{
			conv[i] = strtol(argv[i], &p, 10);

/*		check if string is an integer and other errors */
if (errno != 0 || *p != '\0' || conv[i] > INT_MAX || conv[i] < INT_MIN)
{
	free(num);
	free(conv);
	printf("Error\n");
	return (1);
}

		else
		{
			num[i] = conv[i];
		}
		}
		for (j = 1; j < argc; j++)
		{
			sum += num[j];

		}

		printf("%ld\n", sum);
	}
	return (ret);
}
