#include <stdio.h>

void constructor_func(void) __attribute__((constructor));

/**
 * constructor_func - Prints some text before main runs
 */
void constructor_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
