#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints out static text to standard error
 *
 * Return: 1 if Success
 */

int main(void)
{
/*char buf[] = "and that piece of art is useful*/
/*" - Dora Korpar, 2015-10-19\n";*/
/*write(2, buf, strlen(buf, sizeof(buf)));*/

write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
