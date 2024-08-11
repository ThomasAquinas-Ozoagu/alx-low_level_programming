#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int num = 0x12345678;
	char *c = (char *) &num;

	if (*c == 12)
		return (0);
	if (*c == 78)
		return (1);
	else
		return (-1);

}
