#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int unit;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (unit = 0; unit < 10; unit++)
		{
			if (ten != unit)
			{
				if (unit > ten)
				{
				putchar(48 + ten);
				putchar(48 + unit);
				if (ten != 8 || unit != 9)
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
