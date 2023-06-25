#include "main.h"

/**
 * print_alphabet - Displays all the aphabets in lower case when called
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
