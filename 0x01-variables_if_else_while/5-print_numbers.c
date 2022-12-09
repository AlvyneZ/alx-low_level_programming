#include <stdio.h>

/**
 * main- Prints out the numbers of decimal system
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = '0';
	do {
		putchar(alph++);
	} while (alph <= '9');
	putchar('\n');
	return (0);
}
