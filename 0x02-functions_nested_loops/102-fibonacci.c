#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 if ok
 */

int main(void)
{
	long unsigned int n = 0, m = 1, sum;
	int count;

	printf("1, ");

	for (count = 0; count < 50; count++)
	{
		sum = n + m;
		n = m;
		m = sum;

		printf("%lu, ", sum);
	}
	printf("\n");
	return (0);
}
