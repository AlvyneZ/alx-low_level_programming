#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed
 *   to by s with the constant byte b
 * @s: Memory area to be edited
 * @b: Byte to be filled into the memory area
 * @n: bytes to be filled
 * Return: Edited memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int curs;

	for (curs = 0; curs < n; curs++)
	{
		s[curs] = b;
	}
	return (s);
}

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
	void *mem;
	char *curs;

	if (min > max)
		return (NULL);
	mem = malloc(max + 1 - min);
	if (mem == NULL)
		return (NULL);
	for (curs = (char *)mem; min <= max; curs++)
	{
		curs = min++;
	}
	return (mem);
}
