#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: result of computation
 */

int main()
{
	int n, ans;

	for(n = 1; n < 1024; n++)
	{
		if (n % 3 ==0 || n % 5 == 0)
			ans += n;
	}
	printf("%d\n", ans);
	return(0);
}
