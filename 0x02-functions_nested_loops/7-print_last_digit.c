#include "main.h"


/**
 * print_last_digit - print last digit of a given number
 *
 * @num: integer variable whose last digit is to be printed
 *
 * Return: last digit of inputted variable
 */

int print_last_digit(int num)

{
	int n = num % 10;

	_putchar('0'+ n);
	return ((char)n);
}
