#include "main.h"

/**
 * print_times_table- Prints the times table of n, starting with 0
 * @n: The number whose multiplication table is to be printed
 */
void print_times_table(int n)
{
	int row;
	int column;
	int value;
	int max;
	int zeros;

	if ((n > 15) || (n < 0))
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			value = column * row;
			if (column != 0)
			{
				zeros = 0;
				for (max = 1000; max > 1; max /= 10)
				{
					if (value < max)
					{
						if (zeros)
							_putchar('0');
						else
							_putchar(' ');
					}
					else
					{
						zeros = 1;
						_putchar('0' + (value / max));
						value %= max;
					}
				}
			}
			_putchar('0' + value);
			if (column < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
