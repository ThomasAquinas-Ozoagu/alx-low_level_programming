#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - checks whether an integer is positive or negative.
 *
 * @n: The integer whose sign is about to be checked
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}
