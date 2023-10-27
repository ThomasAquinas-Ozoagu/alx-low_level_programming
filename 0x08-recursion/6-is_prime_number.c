int check_prime(int, int);

#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: the number to be checked
 * Return: 0 or 1
 *
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (check_prime(n, i));
}

#include <stdio.h>
/**
 * check_prime - returns 0 if no, 1 if yes
 * @k: The number to be checked
 * @l: the cycler
 * Return: 0 or 1
 */

int check_prime(int k, int l)
{

	if (l == k)
		return (1);
	if (k % l == 0)
		return (0);

	return (check_prime(k, l + 1));

}
