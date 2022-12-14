#include <stdio.h>

/**
 * main- Print first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int cnt;
	unsigned long prev;
	unsigned long cur;
	unsigned long  tmp;

	prev = 1;
	printf("%lu", prev);
	cur = 2;
	for (cnt = 1; cnt < 98; cnt++)
	{
		printf(", %lu", cur);
		tmp = prev + cur;
		prev = cur;
		cur = tmp;
	}
	printf("\n");

	return (0);
}
