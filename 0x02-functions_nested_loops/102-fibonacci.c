#include <stdio.h>

/**
 * main- Print first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int cnt;
	int prev;
	int cur;
	int tmp;

	prev = 1;
	printf("%d", prev);
	cur = 2;
	for (cnt = 1; cnt < 50; cnt++)
	{
		printf(", %d", cur);
		tmp = prev + cur;
		prev = cur;
		cur = tmp;
	}
	printf("\n");

	return (0);
}
