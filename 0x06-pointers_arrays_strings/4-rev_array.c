#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: the array of integers
 *
 * @n: the number of elements to be reversed
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int k = n - 1;


	while (i <= n / 2)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
		i++;
		k--;
	}

}
