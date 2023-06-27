#include "main.h"

/**
 * puts2 - prints every other char in a string
 *
 * @str: the string to be printed
 *
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
		_putchar('\n');
}
