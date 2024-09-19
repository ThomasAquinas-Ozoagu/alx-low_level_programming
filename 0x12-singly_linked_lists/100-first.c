#include <stdio.h>

/**
 * run_first - run before main
 *
 */

void run_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

__attribute__((constructor))
/**
 * init - Initialization
 *
 */
void init(void)
{
	run_first();
}
