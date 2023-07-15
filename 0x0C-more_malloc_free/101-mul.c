#include <stdio.h>
#include <errno.h> /* for errno */
#include <limits.h> /* for INT_MAX, INT_MIN*/
#include <stdlib.h> /* for strtol*/

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of inputs to be multiplied
 *
 * @argv: the numbers to be multiplied
 *
 * Return: 0 if everything works, 98 if an error occurs.
 */

int main(int argc, char *argv[])
{

	char *p;
	long num[3];
	int i, ret = 0;
	long conv[3];

	if (argc != 3)
	{
		printf("Error\n");
		ret = 1;
	}
	else
	{
		errno = 0;
		for (i = 1; i < argc; i++)
		{
			conv[i] = strtol(argv[i], &p, 10);

/*              check if string is an integer and other errors */
if (errno != 0 || *p != '\0' || conv[i] > INT_MAX || conv[i] < INT_MIN)
{
	printf("Error\n");
	exit(98);
}

			else
			{
				num[i] = conv[i];
			}
		}
		printf("%ld\n", num[1] * num[2]);
	}
	return (ret);
}
