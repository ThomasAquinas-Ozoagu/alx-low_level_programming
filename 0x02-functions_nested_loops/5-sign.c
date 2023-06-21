#include "main.h"

/**
 * print_sign - checks for and prints the sign of the number given to it.
 *
 * @n: integer variable whose sign is to be checked.
 *
 * Return: 1 if positive, -1 if negative, 0 otherwise.
 */

int print_sign(int n)


{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	if (n < 1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
