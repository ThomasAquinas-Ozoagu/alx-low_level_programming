#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: the smallest integer
 *
 * @max: the largest integer
 *
 * Return: created integer
 *
 */

int *array_range(int min, int max)
{
	int i;
	int* nums;

	if (min > max)
		return (NULL);

	nums = malloc(sizeof(min) * (max - min + 1));
	if (!nums)
		return (NULL);

	for (i = 0; i <= (max - min + 1); i++)
		nums[i] = min + i;

	return (nums);
}
