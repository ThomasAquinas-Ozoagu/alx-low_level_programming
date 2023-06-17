#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet, ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
	{
		putchar(ALPHABET);
	}

	putchar('\n');

	return (0);
}
