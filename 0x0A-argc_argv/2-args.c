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
	int n;

	n = 0;
	while (argc--)
	{	printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
