#include "main.h"

<<<<<<< HEAD
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
=======

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
>>>>>>> 5f92fcc8ff754525262ad4537fdb962b9c46200b
}
