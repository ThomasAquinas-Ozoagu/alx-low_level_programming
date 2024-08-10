#include <stdio.h>
#include "main.h"

/**
 * base2 - convert integer to base 2
 * @num: The integer to be converter
 * Return: number of 1s
 */


unsigned int base2(unsigned long int num)
{
	unsigned long int inc = 1, comp = num;
	unsigned int count = 0;

	if (num == 1)
		return (1);
	while (num > inc)
	{
		if ((comp | inc) == num)
			count++;
		inc *= 2;
	}
	return (count);
}

/**
 * flip_bits - calculates of bits you would need to flip to get
 * from one number to another.
 *
 * @n: the starting point
 *
 * @m: the end point
 *
 * Return:  returns the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;

	xor = n ^ m;
	return (base2(xor));
}
