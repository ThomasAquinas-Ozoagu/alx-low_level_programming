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
	char s1[98];
	char *ptr;

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
			ptr = _strcpy(s1, va_arg(my_variables, char*));
			if (s1[0] == '\0')
				printf("nil");
			else
				printf("%s", ptr);
			printf(", ");
		}
		count++;
	}
	va_end(my_variables);

	printf("\n");

}
