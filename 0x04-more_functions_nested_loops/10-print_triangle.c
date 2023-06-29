#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: the dimension for the right angled triangle (H = W)
 */

void print_triangle(int size)
{
	int height = size;
	int hash = size;

	while (size <= 0)
	{
		_putchar('\n');
		break;
	}

	while (size > 0)
	{
		int width = height;
		int mark = 1;

		while (width > 0)
		{
			width--;
			_putchar(' ');
		}

		height--;
		while (mark <= (hash - height))
		{
			_putchar(35);
			mark++;
		}
		size--;
		_putchar('\n');
	}
}
