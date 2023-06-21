#include "main.h"

/**
 * _abs - get the absolute value of a number
 *
 * @n: integer variable whose absolute value is required
 *
 * Return: magnitude of inputted variable
 */

int _abs(int n)


{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
