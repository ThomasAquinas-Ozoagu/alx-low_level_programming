#include "main.h"
void print_100(int num);
void print_10(int num);
void print_1(int num);

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by \n.
 * @m: - the number where the printing starts
 */

void print_to_98(int m)
{
	int n;

	if (m < 98)
		for (n = m; n < 98; n++)
		{
			if (n < -0)
			{
				_putchar('-');
				if (n < -99)
					print_100(-n);
				else if (n > -100 && n < -9)
					print_10(-n);
				else
					print_1(-n);
			}
			else if (n >= 0 && n < 10)
				print_1(n);
			else
				print_10(n);
			_putchar(',');
			_putchar(' ');
		}
	if (m > 98)
	{
		for (n = m; n > 98; n--)
		{
			if (n > 99)
				print_100(n);
			else if ((n < 100) && (n > 9))
				print_10(n);
			else
				print_1(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	print_10(98);
	_putchar('\n');
}

/**
 * print_100 - displays 3 digit numbers
 *
 * @num: number to be displayed
 */
void print_100(int num)
{
	_putchar('0' + (num / 100));
	_putchar('0' + ((num % 100) / 10));
	_putchar('0' + ((num % 100) % 10));
}

/**
 * print_10 - displays 2 digit numbers
 *
 * @num: number to be displayed
 */
void print_10(int num)
{
	_putchar('0' + (num / 10));
	_putchar('0' + (num % 10));
}

/**
 * print_1 - displays 1 digit number
 *
 * @num: number to be displayed
 */
void print_1(int num)
{
	_putchar('0' + num);
}
