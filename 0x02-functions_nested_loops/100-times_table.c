#include "main.h"

/**
 * print_times_table - a function that prints the n times table, starting at 0
 *
 * @n: the number of interest
 */

void print_times_table(int n)
{
	int num, count, mul;

	if (n > -1 && n < 16)
	{

		for (num = 0; num <= n; num++)
		{

			for (count = 0; count <= n; count++)
			{
				mul = num * count;

				if (count > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (mul < 100)
						_putchar(' ');
					if (mul < 10)
						_putchar(' ');
				}
				if (mul >= 100)
				{
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul % 100) / 10));
					_putchar('0' + ((mul % 100) % 10));
				}
				if (mul > 9 && mul < 100)
				{
					_putchar('0' + (mul / 10));
					_putchar('0' + (mul % 10));
				}
				if (mul < 10)
					_putchar('0' + mul);
			}
			_putchar('\n');
		}
	}
}
