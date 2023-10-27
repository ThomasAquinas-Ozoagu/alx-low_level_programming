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
	while (argc)
	{	printf("%s\n", argv[0]);
		break;
	}
	return (0);
}
