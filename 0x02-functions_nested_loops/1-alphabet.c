#include "main.h"

/**
 * print_alphabet- Prints out the alphabet in lower case
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	do {
		_putchar(alph++);
	} while (alph <= 'z');
	_putchar('\n');
}
