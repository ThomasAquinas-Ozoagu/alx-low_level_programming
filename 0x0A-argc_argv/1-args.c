#include <stdio.h>

/**
 * main - prints number of argurments
 *
 * @argc: argurment count
 *
 * @argv: strings of argurments
 *
 * Return: 0 if alliswell
 */

int main(int argc, char *argv[])
{
	int i;
	if (!argc)
		for (i = 0; argv[i]; i++)
			;
	else
		i = argc;

	printf("%d\n", i - 1);
	return (0);
}
