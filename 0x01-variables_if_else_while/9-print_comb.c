#include <stdio.h>

/**
 * main- Prints out the numbers of decimal system comma separated
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	do {
		if (num)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');
	return (0);
}
