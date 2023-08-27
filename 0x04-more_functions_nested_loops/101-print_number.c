#include "main.h"

int print_1000(int temp);
int print_100(int temp);
int print_10(int temp);


/**
 * print_number - prints an integer using _putchar.
 *
 * @n: the number to be printed.
 */

void print_number(int n)
{
	int temp;

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
		if (temp > 999)
		{
			temp = print_1000(temp);
		}
		if (temp > 99 && temp < 1000)
		{
			temp = print_100(temp);
		}
		if (temp > 9 && temp < 100)
		{
			temp = print_10(temp);
		}
		if (temp < 10)
			_putchar('0' + temp);
	}
/*	_putchar('\n'); */
}

int print_1000(int temp)
{
	_putchar('0' + temp / 1000);
	temp = temp % 1000;
	if (temp < 100)
		_putchar('0');
	if (temp < 10)
		_putchar('0');
	return(temp);
}

int print_100(int temp)
{
	_putchar('0' + temp / 100);
	temp = temp % 100;
	if (temp < 10)
		_putchar('0');
	return(temp);
}

int print_10(int temp)
{
	_putchar('0' + temp / 10);
	temp = temp % 10;
	return(temp);
}
