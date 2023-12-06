#include <stddef.h>
/**
 * getlen - get string lenght
 * @str: the string
 * Return: lenght of the string
 */
unsigned int getlen(const char *str)
{
	unsigned int lenn;

	for (lenn = 0; str[lenn] != '\0'; lenn++)
	{
		;
/*		printf("get len %d\n", lenn + 1); */
	}
	return (lenn);
}

/**
 * power - find the x raised to the power y
 * @base: the main number
 * @index: the number of times to raise it
 * Return: the result
 */


 unsigned int power(unsigned int base, unsigned int index)
 {
	unsigned int nums, tot = 1;

	if (index == 0)
		return (1);
	for (nums = 1; nums <= index; nums++)
	{
		tot *= base;
/*		printf("tot = %d", tot); */
	}
	return (tot);
}

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 *
 * @b: a string of 0 and 1 chars
 *
 * Return: The sum of the arithmetics
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int strln, suma = 0, bit = 0;
	int ndex;

/* get size of @b */
	strln = getlen(b);
/*	printf("we have the length as %d\n", strln); */
/*return 0 if b is NULL */
	if (b == NULL)
		return (0);
/*	printf("b is not NULL\n"); */

/* Cycle through @b from the LSB*/
	for (ndex = (strln); ndex >= 0; ndex--)
	{
		if (b[ndex - 1] == '0')
		{
/*
 *			printf("The bit is 0, index is %d\n", ndex - 1);
 *			printf("suma is now %d\n", suma);
 *			printf("The character is %d\n", b[ndex - 1]);
 */
			;
		}
/* For every 1 encountered, add 2^ the corresponding index */
		if (b[ndex - 1] == '1')
		{
/*			printf("The bit is 1, index is %d\n", ndex - 1); */
			suma += power(2, bit);
/*			printf("suma is now %d\n", suma); */
/*			printf("The character is %c\n", b[ndex - 1]); */
		}
		if ((b[ndex - 1] < 48 || b[ndex - 1] > 49) && b[ndex - 1] != 0)
		{
			return (0);
		}

		bit++;
	}

	return (suma);
}
