#include "main.h"
#include <stdio.h>
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
	while (argv[0])
	{	printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
