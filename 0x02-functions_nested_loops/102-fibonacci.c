#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 if ok
 */

int main(void)
{
	unsigned long int n = 1, m = 1, sum;
	int count;

	printf("1");
	for (count = 0; count < 49; count++)
	{
		sum = n + m;
		n = m;
		m = sum;

		printf(", %lu", sum);
	}
	printf("\n");
	return (0);
}
