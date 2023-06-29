#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 *
 * @n: the number to be printed.
 */

void print_number(int n)
{
	int count, temp, quo;

	if (n == 0)
	{
		_putchar(48);
		temp = 0;
	}
	else if (n < 0)
	{
		temp = -1 * n;
		_putchar(45);
	}
	else
		temp = n;

	if (temp == 0)
		;
	else
	{
		if (temp < 10)
			_putchar('0' + temp);
		else
		{
			int rem = temp;

			while (temp / 10 > 0)
			{
				temp = temp / 10;
				count++;
			}

			while (count > 0)
			{
				quo = rem / (count * 10);
				_putchar('0' + quo);
				rem = rem - (count * 10);
				count--;
			}
		}
	}
	_putchar('\n');
}
