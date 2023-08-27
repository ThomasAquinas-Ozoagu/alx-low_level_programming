#include "main.h"

/**
 * print_diagonal - prints diagonal line.
 *
 * @n: the length of the line
 */

void print_diagonal(int n)
{
	int j = 0;
	int m;

	while (j < n)
	{
		m = 0;

		while (m < j)
		{
			_putchar(32);
			m++;
		}
		_putchar(92);
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
