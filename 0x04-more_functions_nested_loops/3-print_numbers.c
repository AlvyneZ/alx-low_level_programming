#include "main.h"

/**
 * print_numbers - Prints out the digits of decimal number system
 */
void print_numbers(void)
{
	char alph;

	alph = '0';
	do {
		_putchar(alph++);
	} while (alph <= '9');
	_putchar('\n');
}
