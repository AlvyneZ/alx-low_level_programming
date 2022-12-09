#include <stdio.h>

/**
 * main- Prints out the alphabet in lower case except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	do {
		if ((alph != 'q') && (alph != 'e'))
			putchar(alph++);
	} while (alph <= 'z');
	putchar('\n');
	return (0);
}
