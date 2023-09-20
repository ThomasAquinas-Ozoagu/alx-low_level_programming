#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 *
 * @n: the number of integers passed to the function
 *
 * Return: 0 if no parameter was passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_variables;
	int count;

	if (separator != NULL)
	{
		va_start(my_variables, n);
		printf("%d", va_arg(my_variables, int));

		count = n - 1;
		while (count > 0)
		{
		printf("%s", separator);
		printf("%d", va_arg(my_variables, int));
		count--;
		}
		va_end(my_variables);
	}

	printf("\n");

}
