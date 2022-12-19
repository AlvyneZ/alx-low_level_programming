#include "main.h"

/**
 * print_number_simple - Print a multiple digit number
 * @n: Number to print
 */
void print_number_simple(int n)
{
	int max;
	int zeros;

	zeros = 0;
	for (max = 1000000000; max >= 1; max /= 10)
	{
		if (max == 1)
		{
			zeros = 1;
		}
		if (n < max)
		{
			if (zeros)
				_putchar('0');
		}
		else
		{
			zeros = 1;
			_putchar('0' + (n / max));
			n %= max;
		}
	}
}

/**
 * print_array - Prints out the elements of an integer array
 * @a: Pointer to integer array
 * @n: Array length
 */
void print_array(int *a, int n)
{
	int cnt;

	print_number_simple(*a);
	for (cnt = 1; cnt < n; cnt++)
	{
		_putchar(',');
		_putchar(' ');
		print_number_simple(*(a + cnt));
	}
	_putchar('\n');
}
