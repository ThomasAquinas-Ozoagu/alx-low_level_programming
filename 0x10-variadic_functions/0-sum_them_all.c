#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: the first integer parameter
 *
 * Return: 0 if no parameter was passed
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_variables;
	int sum = 0, count;

	if (n == 0)
		return (0);

	va_start(my_variables, n);
	count = n;
	while (count > 0)
	{
		sum += va_arg(my_variables, int);
		count--;
	}
	va_end(my_variables);
	return (sum);
}
