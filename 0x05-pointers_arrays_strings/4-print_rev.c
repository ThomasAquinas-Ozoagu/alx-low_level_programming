#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
	int n, m;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
		count++;

	for (m = count; m >= 0; m--)
		_putchar(s[m]);

	_putchar('\n');
}
