#include <stdio.h>

/**
 * run_first - run before main
 *
 */

void run_first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

__attribute__((constructor))
void init() {
	run_first();
}
