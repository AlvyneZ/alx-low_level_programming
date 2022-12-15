#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of specified length
 * @n: Length of the line
 */
void print_diagonal(int n)
{
	int indx;
	int col;

	for (indx = 0; indx < n; indx++)
	{
		for (col = 0; col < indx; col++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
