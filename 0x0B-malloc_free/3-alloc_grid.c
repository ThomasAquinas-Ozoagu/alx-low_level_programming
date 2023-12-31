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
	int i, j, k, m;
	int **grid;
	int *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(row));
	if (!grid)
	{
		return (NULL);
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(i));
		if (!grid[i])
		{
			for (m = 0; m <= i; m++)
				free(grid[m]);
			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}

	return (grid);
}
