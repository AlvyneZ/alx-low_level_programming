#include "main.h"

/**
 * print_number - Print a multiple digit number including negative sign
 * @n: Number to print
 */
void print_number(int n)
{
	int max;
	int zeros;

	zeros = 0;
	if (n < 0)
	{
		_putchar('-');
		for (max = -1000000000; max <= -1; max /= 10)
		{
			if (max == -1)
			{
				zeros = 1;
			}
			if (n > max)
			{
				if (zeros)
					_putchar('0');
			}
			else
			{
				zeros = 1;
				_putchar('0' + (n / max));
				n %= (-max);
			}
		}
	}
	else
	{
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
}
