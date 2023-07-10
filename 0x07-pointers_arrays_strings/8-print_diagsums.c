#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of the two diagonals of a square matrix of int.
 *
 * @a: pointer to a square matrix
 *
 * @size: the size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int k, l = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				k += a[i][j];
		}
	}
	printf("%d, %d", k, l);
}
