#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		putchar(word[count]);
	}
	putchar('\n');
	return (0);
}
