#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 if ok
 */

int main(void)
{
	unsigned long int n, m, sum, total = 0;


	n = 0;
	m = 1;

	while (1)
	{
		sum = n + m;
		n = m;
		m = sum;

		if (sum < 4000000)
		{
			if (sum % 2 == 0)
			{
				total += sum;
			}

		}
		else
		{
			printf("%lu", total);
			break;
		}
	}
	printf("\n");
	return (0);
}
