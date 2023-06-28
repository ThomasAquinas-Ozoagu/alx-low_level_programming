#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 *
 * @a: the address for the array
 *
 * @n: the number of elements in the array
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m > 0)
			printf(", ");
		printf("%d", *(a + m));
	}
		printf("\n");
}
