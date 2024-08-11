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
 * get_bit - converts integer to binary
 *
 * @n: the integer to be converted
 *
 * @index: The position of the bit
 * Return:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = n, checker = 0, count = 0, temp, drw = 0;

/* find the highest power of 2 (checker) that is a factor of n */
	while (result > checker)
	{
		checker *= 2;
		count++;
	}
	if (result == 0)
		return (0);
	if (result == 1)
		return (1);
	if (result > 1)
	{
		if (power(2, count) > result)
			count--;
		for (drw = count + 1; drw > 0; drw--)
		{
			temp = power(2, drw - 1);
			if (result >= temp)
			{
				/*	_putchar('1'); */
				result -= temp;
				if ((drw - 1) == index)
					return (1);
			}
			else
			{
				if ((drw - 1) == index)
					return (0);
				/*	_putchar('0'); */
			}
/* printf("\nresult is %lu, temp is %lu, drw is %d\n", result, temp, drw);*/
		}
	}
/* print 1 to correspond to that */
/* subtract checker from n and store the difference */
/* check the next lower power of 2 recursively till 1. */
	return (-1);
}
