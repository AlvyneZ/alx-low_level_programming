#include "main.h"

/**
 * print_number- Print a multiple digit number
 * @n: Number to print
 */
void print_number(int n)
{
	int a;
	int max;

	a = 0;
	for (max = 1000000000; max > 1; max /= 10)
	{
		if (n < max)
		{
			if (a)
				_putchar(0);
		}
		else
		{
			a = 1;
			_putchar('0' + (n / max));
			n %= max;
		}
	}
	_putchar('0' + n);
}

/**
 * print_to_98- Print the numbers from n to 98 (up or down counting)
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
