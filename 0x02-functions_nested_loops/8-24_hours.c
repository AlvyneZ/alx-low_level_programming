#include "main.h"

/**
 * jack_bauer- Print all the minutes of an hour
 */
void jack_bauer(void)
{
	int h1;
	int h0;
	int m0;
	int m1;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h0 = 0; ((h0 < 10) && !((h1 >= 2) && (h0 > 4))); h0++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m0 = 0; m0 < 10; m0++)
				{
					_putchar('0' + h1);
					_putchar('0' + h0);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m0);
					_putchar('\n');
				}
			}
		}
	}
}
