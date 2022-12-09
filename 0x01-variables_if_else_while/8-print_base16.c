#include <stdio.h>

/**
 * main- Prints out the digits in the hexadecimal system
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = '0';
	do {
		putchar(alph++);
		if (alph == ('9' + 1))
			alph = 'a';
	} while (alph != 'g');
	putchar('\n');
	return (0);
}
