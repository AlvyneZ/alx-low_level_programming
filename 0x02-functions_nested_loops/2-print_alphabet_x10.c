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

/**
 * print_alphabet_x10- Prints out the alphabet in lower case ten times
 */
void print_alphabet_x10(void)
{
	int cnt;

	cnt = 0;
	do {
		print_alphabet();
		cnt++;
	} while (cnt < 10);
}
