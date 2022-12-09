#include <stdio.h>

/**
 * main- Prints out the alphabet in lower case in reverse
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'z';
	do {
		putchar(alph--);
	} while (alph >= 'a');
	putchar('\n');
	return (0);
}
