#include <stdio.h>
#include "main.h"

/**
 * base2 - convert integer to base 2
 * @num: The integer to be converter
 * Return: number of 1s
 */


unsigned int power(unsigned long int num)
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
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: the integer to be converted
 *
 * @index: The position of the bit
 * Return:  the value of the bit at index index or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp, addn;

	temp = *n;
	addn = power(2, index);
	/*      printf("The number is %lu\nwhile Index is %d\n addn is %lu\n */
	/* and junior is %lu\n\n", temp, index, addn, junior); */
	if ((temp | addn) == *n)
		*n -= addn;

	return (1);
}
