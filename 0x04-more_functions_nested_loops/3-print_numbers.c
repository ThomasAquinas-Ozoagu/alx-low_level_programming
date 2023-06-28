#include "main.h"

/**
 * print_numbers - prints the members of base 10 number system
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
