#include "main.h"
#include <stdlib.h>

/**
 * array_range - Allocates memory dynamically for an
 *  array initialized with a specified range of numbers
 * @min: Start of range
 * @max: End of range
 * Return: a pointer to the allocated memory, or
 *  NULL if failure occurs
 */
int *array_range(int min, int max)
{
	int *mem;
	int *curs;

	if (min > max)
		return (NULL);
	mem = malloc((max + 1 - min) * sizeof(int));
	if (mem == NULL)
		return (NULL);
	for (curs = mem; min <= max; curs++)
	{
		*curs = min++;
	}
	return (mem);
}
