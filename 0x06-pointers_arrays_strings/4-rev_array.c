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
	int l;

	if (n % 2)
		l = n / 2;
	else
		l = (n + 1) / 2;

	while (i < l)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
		i++;
		k--;
	}

}
