#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory dynamically from
 *  heap and exits program in the event of failure
 * @b: Size of the memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
