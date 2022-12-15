#include "main.h"

/**
 * print_square - Prints a square of specified length
 * @n: Square side length
 */
void print_square(int n)
{
	int indx;
	int col;

	for (indx = 0; indx < n; indx++)
	{
		for (col = 0; col < n; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
