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
	int change, sum = 0;

	if (argc == 2)
	{
		change = atoi(argv[1]);
		if (change > 24)
		{
			sum += change / 25;
			change = change % 25;
		}
		if (change > 9)
		{
			sum += change / 10;
			change = change % 10;
		}
		if (change > 4)
		{
			sum += change / 5;
			change = change % 5;
		}
		if (change > 1)
		{
			sum += change / 2;
			change = change % 2;
		}
		sum += change;
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
