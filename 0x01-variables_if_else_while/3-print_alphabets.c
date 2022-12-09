#include <stdio.h>

/**
 * main- Prints out the alphabet in lower case then upper case
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	do {
		putchar(alph++);
		if (alph == ('z' + 1))
			alph = 'A';
	} while (alph <= 'Z');
	putchar('\n');
	return (0);
}
