#include "main.h"

/**
 * print_chessboard - Prints out a chess board
 * @a: Pointer to chessboard
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
