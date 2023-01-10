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
 * alloc_grid - Creates a 2D grid of integers of specified
 *  size, and filled with zeros
 * @width: Array width
 * @height: Array Height
 * Return: a pointer to the 2D array, or NULL if it fails or
 *  invalid parameters (<= 0) are provided
 */
int **alloc_grid(int width, int height)
{
	int **out, row, curs;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	out = malloc(sizeof(int) * width * height);
	if (out == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		for (curs = 0; curs < width; curs++)
		{
			out[row][curs] = 0;
		}
	}
	return (out);
}
