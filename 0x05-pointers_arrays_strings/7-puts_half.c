#include "main.h"


/**
 * puts_half - prints the second half of a string
 *
 * @str: the string whose lenght is about to be measured
 *
 * Return: the integer result of the analysis.
 */

void puts_half(char *str)
{
	int l, m, n;
	int count = 0;

	for (n = 0; str[n] != '\0'; n++)
		count++;

	count--;
	if (count % 2 != 0)
		l = (count - 1) / 2;
	else
		l = count / 2;

	for (m = l; m <= count; m++)
		_putchar(str[m]);

	_putchar('\n');
}
