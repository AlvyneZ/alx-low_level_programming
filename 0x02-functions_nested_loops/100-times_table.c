#include "main.h"

/**
 * print_number_w_spaces- Print a multiple digit number with leading spaces
 * @n: Number to print
 */
void print_number_w_spaces(int n)
{
	int max;
	int zeros;

	zeros = 0;
	for (max = 1000; max > 1; max /= 10)
	{
		if (n < max)
		{
			if (zeros)
				_putchar('0');
			else
				_putchar(' ');
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
 * print_times_table- Prints the times table of n, starting with 0
 * @n: The number whose multiplication table is to be printed
 */
void print_times_table(int n)
{
	int row;
	int column;
	int value;

	if ((n > 15) || (n < 0))
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			value = column * row;
			if (column != 0)
			{
				print_number_w_spaces(value);
			}
			_putchar('0' + (value % 10));
			if (column < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
