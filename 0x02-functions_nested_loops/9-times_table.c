#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int b, c;



	for (b = 0; b < 10; b++)
	{
	for (c = 0; c < 10; c++)
	{
		if (b * c > 9)
		{
			_putchar('0' + ((b * c) / 10));
		}
		_putchar('0' + ((b * c) % 10));


		if (c < 9)
		{
			_putchar(',');
			_putchar(' ');

			if ((b * (c + 1)) < 10)
			{
				_putchar(' ');
			}
		}

	}
		_putchar('\n');

	}

}
