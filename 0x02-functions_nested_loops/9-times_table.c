#include "main.h"

/**
 * times_table- Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row;
	int column;
	int value;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			value = column * row;
			if (column != 0)
			{
				if (value < 100)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (value / 100));
					value %= 100;
				}
				if (value < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (value / 10));
					value %= 10;
				}
			}
			_putchar('0' + value);
			if (column < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
