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
 * create_array - Creates an array of chars, and
 *  initializes it with a specific char
 * @size: Size of the array to be created
 * @c: Character to be used to fill the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size);
	if (arr != NULL)
		return (_memset(arr, c, size));
	return (NULL);
}
