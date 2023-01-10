#include "main.h"
#include <stdlib.h>

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
	int **out, *row, ind, curs;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	out = malloc(height * sizeof(int *));
	if (out == NULL)
		return (NULL);
	for (ind = 0; ind < height; ind++)
	{
		row = malloc(width * sizeof(int));
		if (row == NULL)
		{
			while (ind > 0)
			{
				free(out[--ind]);
			}
			free(out);
			return (NULL);
		}
		out[ind] = row;
		for (curs = 0; curs < width; curs++)
		{
			row[curs] = 0;
		}
	}
	return (out);
}
