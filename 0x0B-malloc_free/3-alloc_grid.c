#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *
 * @width: array width
 *
 * @height: array height
 *
 * Return: If width or height is 0 or negative, return NULL
 *
 * return NULL on failure
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l = 0, m;
	int **grid;
	int *row;

	if (width <= 0 || height <= 0)
		l = 1;

	grid = malloc(height * sizeof(row));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(i));

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
			if (grid[j][k] != 0)
				l = 1;
		}
	}
	if (l > 0)
	{
		for (m = 0; m <= i; m++)
		{
			free(grid[m]);
		}
		free(grid);
		return (NULL);
	}
	return (grid);
}