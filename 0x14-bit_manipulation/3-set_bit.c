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
 * set_bit - converts integer to binary
 *
 * @n: the integer to be converted
 *
 * @index: The position of the bit
 * Return:  the value of the bit at index index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp, addn;

	temp = *n;
	addn = power(2, index);
/*	printf("The number is %lu\nwhile Index is %d\n\n", temp, index); */
	*n += addn;
	if (*n == temp)
		return (-1);
	return (1);
}
