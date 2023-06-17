#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tho;
	int uni;


	for (tho = 0; tho < 100; tho++)
	{
		for (uni = 0; uni < 100; uni++)
		{
			if (uni != tho)
			{
				if (uni > tho)
				{
					putchar(48 + tho / 10);
					putchar(48 + tho % 10);
					putchar(' ');
					putchar(48 + uni / 10);
					putchar(48 + uni % 10);
					if (tho != 98 || uni != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
