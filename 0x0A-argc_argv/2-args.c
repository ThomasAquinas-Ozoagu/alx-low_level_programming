#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: args count
 *
 * @argv: string of args
 *
 * Return: 0 if aliswel
 *
 */

int main(int argc, char *argv[])
{
	int i;



	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
