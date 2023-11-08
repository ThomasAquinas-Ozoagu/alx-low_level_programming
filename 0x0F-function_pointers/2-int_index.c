
/**
 * int_index -  a function that searches for an integer.
 *
 * @array: the haystack
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) > 0)
			return (i);
	}
	return (-1);
}
