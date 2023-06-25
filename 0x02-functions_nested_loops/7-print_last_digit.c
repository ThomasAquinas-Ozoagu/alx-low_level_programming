#include "main.h"


/**
 * print_last_digit - print last digit of a given number
 *
 * @n: integer variable whose last digit is to be printed
 *
 * Return: the last digit of inputted variable
 */

int print_last_digit(int n)

{
	int m;

	if (n >= 0)
	{
		m = (n % 10);
	}
	if (n < 0)
	{
		m = (-1 * (n % 10));
	}

	_putchar('0' + m);
	return (m);
}
