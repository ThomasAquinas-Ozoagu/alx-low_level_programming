#include <stdio.h>


/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 if ok
 */

int main(void)
{
	unsigned long int n = 1, y = 1, sum1, sum2 = 0, m = 0, x = 0, rem = 0;
	int count;

	printf("1");
	for (count = 0; count < 97; count++)
	{
		if (n > 1000000000000000)
		{
			m = n / 1000000000000000;
			n = n % 1000000000000000;
			x = y / 1000000000000000;
			y = y % 1000000000000000;
		}
		sum1 = (n + y);
		rem = sum1 / 1000000000000000;
		sum1 = sum1 % 1000000000000000;
		sum2 = rem + m + x;
		x = m;
		y = n;

		m = sum2;
		n = sum1;


		printf(", ");
		if (sum2 > 0)
			printf("%lu", sum2);
		printf("%lu", sum1);

	}
	printf("\n");
	return (0);
}
