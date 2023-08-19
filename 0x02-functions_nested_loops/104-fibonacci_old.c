#include <stdio.h>

unsigned long int print_long(unsigned long int num_a, unsigned long int num_b);


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
	for (count = 0; count < 97; count++)
	{
		sum = print_long(n, m);
		n = m;
		m = sum;
		

/*		printf(", %lu", sum); */
	}
	printf("\n");
	return (0);
}

/**
 * print_long - adds numbers longer than 15 digits without overflowing
 *
 * @num_a: first number
 *
 * @num_b: Second number
 *
 * Return: sum of the two numbers
 */

unsigned long int print_long(unsigned long int num_a, unsigned long int num_b)
{
	unsigned long int lsb_a = num_a % 1000000000000000;
	unsigned long int msb_a = num_a / 1000000000000000;
	unsigned long int lsb_b = num_b % 1000000000000000;
	unsigned long int msb_b = num_b / 1000000000000000;
	unsigned long int lsb_sum = lsb_a + lsb_b;
	unsigned long int rem = lsb_sum / 1000000000000000;
	unsigned long int msb_sum = rem + msb_a + msb_b;

	printf(", ");
	if (msb_sum > 0)
		printf("%lu", msb_sum);
	printf("%lu", lsb_sum);
	return (num_a + num_b);
}
