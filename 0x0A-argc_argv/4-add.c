#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int isIntegered(char *text);

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
	int n, sum = 0;

	for (n = 1; n < argc; n++)
	{
		if (isIntegered(argv[n]))
			sum += atoi(argv[n]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (sum > 0)
		printf("%d\n", sum);
	else
		printf("0\n");
	return (0);
}

#include <string.h>

/**
 * isIntegered - checks for intgers
 * @text: the string to be checked
 * Return: 1 if yes
 */

int isIntegered(char *text)
{
	unsigned long int c;

	for (c = 0; c < strlen(text); c++)
	{
		if (text[c] < 48 || text[c] > 58)
			return (0);
	}
	return (1);
}
