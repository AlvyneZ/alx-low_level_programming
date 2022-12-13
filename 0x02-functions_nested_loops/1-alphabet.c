#include "main.h"

/**
 * main- Tests out a printf implementation
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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