#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees up dynamically allocated memory of
 *  2d integer array
 * @grid: 2d Array (pointer to pointers)
 * @height: Array Height
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		free(grid[--height]);
	}
	free(grid);
}
