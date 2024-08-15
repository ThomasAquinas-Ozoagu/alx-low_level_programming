#include <stdio.h>
#include "main.h"

/**
 * power - find the x raised to the power y
 * @base: the main number
 * @index: the number of times to raise it
 * Return: the result
 */


unsigned long int power(unsigned long int base, unsigned int index)
{
	unsigned long int tot = 1;
	unsigned int nums;

	if (base == 0)
		return (0);
	if (index == 0)
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
