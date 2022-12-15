#include "main.h"

/**
 * print_line - Prints a straight line of specified length
 * @n: Length of the line
 */
void print_line(int n)
{
	int indx;

	for (indx = 0; indx < n; indx++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
