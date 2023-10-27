#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 if OK
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
