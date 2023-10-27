int find_sqrt(int, int);

#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 *
 * @n: the number whose square root is to be calculated
 *
 * Return: -1 if no answer is found, or the answer if found
 *
 */

int _sqrt_recursion(int n)
{
	int i = 0, j = 1;

	if (n <= 0)
		return (-1);
	i = find_sqrt(n, j);

	if (i > 0)
		return (i);
	else
		return (-1);
}

/**
 * find_sqrt - locates the square root of a number
 * @k: the principal number
 * @l: the number to cycle with
 * Return: the square root of the number
 */

int find_sqrt(int k, int l)
{
	if (l * l == k)
		return (l);
	if (l * l > k)
		return (-1);
	return (find_sqrt(k, l + 1));

}
