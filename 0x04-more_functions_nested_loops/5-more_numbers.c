#include "main.h"

/**
 * more_numbers - prints 10x Numbers from 0 to 14, followed by a new line.
 *
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		i++;
		_putchar('\n');
	}

}
