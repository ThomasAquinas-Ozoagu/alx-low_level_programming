#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything, followed by a new line
 *
 * @format: c = char, i = integer, f = float, s = char
 *
 * Return: nothing
 *
 */

void print_all(const char * const format, ...)
{
	va_list my_variables;
	int count;

	va_start(my_variables, format);

	count = 0;
	while (format[count] != '\0')
	{
		if (format[count] == 'c')
		{
			printf("%c", va_arg(my_variables, int));
			printf(", ");
		}
		if (format[count] == 'i')
		{
			printf("%d", va_arg(my_variables, int));
			printf(", ");
		}
		if (format[count] == 'f')
		{
			printf("%f", va_arg(my_variables, double));
			printf(", ");
		}
		if (format[count] == 's')
		{
			printf("%s", va_arg(my_variables, char *));
			printf(", ");
		}
		count++;
	}
	va_end(my_variables);

	printf("\n");

}
