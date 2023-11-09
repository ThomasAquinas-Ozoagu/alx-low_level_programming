#include <stdarg.h>
#include <stdio.h>
/**
 * _strcpy - copies a string using a pointer string 1 --> string 2
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*for (i = 0; src[i] != '\0'; i++)*/
	/**(dest + i) = src[i];*/


	do {
		if (src[i] == '\0')
		{
			*(dest + i) = src[i];
			break;
		}
		else
		{
			*(dest + i) = src[i];
			i++;
			if (src[i] == '\0')
			{
				*(dest + i) = src[i];
			}
		}
	} while (src[i] != '\0');

	return (dest);
}


/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: the string to be printed between strings
 *
 * @n: the number of strings passed to the function
 *
 * Return: 0 if no parameter was passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_variables;
	int count;
	char s1[98];
	char *ptr;

	va_start(my_variables, n);
	ptr = _strcpy(s1, va_arg(my_variables, char*));
	if (s1[0] == '\0')
		printf("nil");
	else
		printf("%s", ptr);

	count = n - 1;
	while (count > 0)
	{
		if (separator != NULL)
			printf("%s", separator);
		ptr = _strcpy(s1, va_arg(my_variables, char*));
		if (s1[0] == '\0')
			printf("nil");
		else
			printf("%s", ptr);

		count--;
	}
	va_end(my_variables);

	printf("\n");

}
