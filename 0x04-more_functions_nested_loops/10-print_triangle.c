#include "main.h"

/**
 * print_triangle - Prints a triangle of specified length
 * @n: triangle side length
 */
void print_square(int n)
{
	int indx;
	int col;

	for (indx = 0; indx < n; indx++)
	{
		for (col = 1; col < (n - indx); col++)
		{
			_putchar(' ');
		}
		for (col = 0; col <= indx; col++)
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
