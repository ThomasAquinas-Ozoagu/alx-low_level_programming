#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143;
	long int factor = 2;
	long int quo = num;

	while (quo > 1)
	{
		if (quo % factor == 0)
		{
			quo = (quo / factor);
		}
		else
			factor++;
	}
	printf("%li", factor);
	printf("\n");
	return (0);
}

/*
 *	while (factor < num)
 *	{
 *		if (factor % num == 0)
 *		{
 *			while ((chk_prime < factor) && (prime == 0))
 *			{
 *				if (factor % chk_prime == 0)
 *					prime++;
 *				else
 *					chk_prime++;
 *			}
 *
 *			if (chk_prime == factor)
 *				printf("%d, ", k);
 *		}
 *		factor++;
 */
