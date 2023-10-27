void puts_recursion(char *s, int n);
int count_recursion(char *str);


#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: The string to be printed
 *
 * Return: nothing
 *
 */

void _print_rev_recursion(char *s)
{

	int i;

/* Count characters in the string */
	i = count_recursion(s);
/*	printf("%d", i); */

/* print recursivly in reverse */
	puts_recursion(s, i);
}

#include "main.h"

/**
 * puts_recursion - measures the lenght of a string
 *
 * @s: The string whose lenght we wish to establish
 *
 * @n: lenght of string
 *
 * Return: The lenght of the string
 *
 */

void puts_recursion(char *s, int n)
{
/*	printf("%d\n", n); */
	if (n >= 0)
	{

		_putchar(s[n]);
		puts_recursion(s, n - 1);
	}
}

/**
 * count_recursion - measures the lenght of a string
 *
 * @s: The string whose lenght we wish to establish
 *
 * Return: The lenght of the string
 *
 */

int count_recursion(char *s)
{
	int k = 0;

	if (s[0])
	{
		k += 1;
		k += count_recursion(s + 1);
	}
	return (k);
}
