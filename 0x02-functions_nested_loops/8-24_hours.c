#include "main.h"

/**
 * jack_bauer - print every second of the 24 hours of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int b, c;



	for (b = 0; b < 24; b++)
	{
	for (c = 0; c < 60; c++)
	{
		_putchar('0' + (b / 10));
		_putchar('0' + (b % 10));
		_putchar(':');
		_putchar('0' + (c / 10));
		_putchar('0' + (c % 10));
		_putchar('\n');

	}
	}

}
