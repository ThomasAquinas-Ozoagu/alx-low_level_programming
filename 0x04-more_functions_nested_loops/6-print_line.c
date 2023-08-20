#include "main.h"

/**
 * print_line - print dashes on the screen
 *
 * @n: The number of dashes to be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
