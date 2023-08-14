#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by \n.
 * @m: - the number where the printing starts
 */
void print_to_98(int m)
{
	int n;

	if (m < 98)
		for (n = m; n < 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');

				if (n < -9)
				  {
				    _putchar('0' + (n / -10));
				    _putchar('0' + (n % -10));
				  }
				else
				  {
				    _putchar('0' + (-n));
				  }
			}
			else if (n > 10)
			  {
			    _putchar('0' + (n / 10));
			    _putchar('0' + (n % 10));
			  }
			else
			  {
			    _putchar('0' + (n % 10));
			  }

			_putchar(',');
			_putchar(' ');
		}


	if (m > 98)
	{
		for (n = m; n > 98; n--)
		{
			if (n > 99)
			  {
			    _putchar('0' + (n / 100));
			    _putchar('0' + ((n % 100) / 10));
			    _putchar('0' + ((n % 100) % 10));
			  }
			else if ((n < 100) && (n > 10))
			  {
			    _putchar('0' + (n / 10));
			    _putchar('0' + (n % 10));
			  }
			else
			  {
			    _putchar('0' + (n % 10));
			  }
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
