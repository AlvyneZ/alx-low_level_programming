#include <stdio.h>

/**
 * main- Prints out the numbers of decimal system comma separated
 * Return: 0
 */
int main(void)
{
	int num0;
	int num1;

	num0 = 0;
	do {
		num1 = num0 + 1;
		while (num1 <= 9)
		{
			if (num0 || (num1 != 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(num0 + '0');
			putchar(num1 + '0');
			num1++;
		}
		num0++;
	} while (num0 <= 9);
	putchar('\n');
	return (0);
}
