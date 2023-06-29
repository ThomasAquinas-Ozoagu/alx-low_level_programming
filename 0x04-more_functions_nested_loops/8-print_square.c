#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: lenght of square
 */

void print_square(int size)
{
	int height = size;

	while (size <= 0)
	{
		_putchar('\n');
		break;
	}

	while (size > 0)
	{
	int width = height;

	while  (width > 0)
	{
		_putchar(35);
		width--;
	}
	_putchar('\n');
	size--;
	}
}
