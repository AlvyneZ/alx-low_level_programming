#include <stdio.h>

/**
 * main- Prints out the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char alph;
	alph = 'a';

	do
	{
		putchar(alph++);
	} while (alph != 'z');
	putchar('\n');
	return (0);
}
