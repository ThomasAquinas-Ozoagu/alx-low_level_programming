#include "function_pointers.h"

/**
 * print_name - invokes a function that prints a name
 *
 * @name: The name to be printed
 *
 * @f: A function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
