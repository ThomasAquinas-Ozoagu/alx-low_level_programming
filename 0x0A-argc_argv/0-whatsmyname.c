#include <stdio.h>

/**
 * main - prints files name
 *
 * @argv: - pointer to array of arguments
 *
 * Return: 0 if everything is fine
 */

int main(int argc, char **argv)
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
