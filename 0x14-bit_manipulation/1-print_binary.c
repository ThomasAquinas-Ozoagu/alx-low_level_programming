#include <stdio.h>
#include "main.h"

/**
 * power - find the x raised to the power y
 * @base: the main number
 * @index: the number of times to raise it
 * Return: the result
 */


unsigned long int power(int base, int index)
{
	unsigned long int tot = 1;
	int nums;

	if (index == 0 || base == 0)
		return (1);
	for (nums = 1; nums <= index; nums++)
	{
		tot *= base;
		/*              printf("tot = %d", tot); */
	}
	return (tot);
}


/**
 * print_binary - converts integer to binary
 *
 * @n: the integer to be converted
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int result = n, checker, count, temp;
	int drw = 0;
/* find the highest power of 2 (checker) that is a factor of n */
	count = 0;
	checker = 1;
	while (result > checker)
	{
		checker *= 2;
		count++;
	}
	if (result < 2)
		_putchar('0' + result);
	else
	{
		if (power(2, count) > result)
			count--;
		for (drw = count; drw >= 0; drw--)
		{
			temp = power(2, drw);
			if (result >= temp)
			{
				_putchar('1');
				result -= temp;
			}
			else
				_putchar('0');
/* printf("\nresult is %lu, temp is %lu, drw is %d\n", result, temp, drw);*/
		}
	}
/* print 1 to correspond to that */
/* subtract checker from n and store the difference */
/* check the next lower power of 2 recursively till 1. */
}
