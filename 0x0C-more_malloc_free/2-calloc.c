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
 * _calloc - Allocates memory dynamically for an
 *  array of given size and initializes the memory
 *  to zero
 * @nmemb: Number of elements of the array
 * @size: Size of each element
 * Return: a pointer to the allocated memory, or
 *  NULL if failure occurs
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	_memset((char *)mem, 0, (nmemb * size));
	return (mem);
}
