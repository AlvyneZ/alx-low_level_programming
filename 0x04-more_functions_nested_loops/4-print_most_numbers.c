#include "main.h"

/**
 * print_most_numbers - Prints out the digits of decimal number system except 2 and 4
 */
void print_most_numbers(void)
{
	char alph;

	alph = '0';
	do {
		if ((alph != '2') && (alph != '4'))
			_putchar(alph++);
	} while (alph <= '9');
	_putchar('\n');
}
