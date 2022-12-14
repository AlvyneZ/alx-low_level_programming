#include <stdio.h>

/**
 * main- Print first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int cnt;
	unsigned int prevXtra;
	unsigned int curXtra;
	unsigned int tmpXtra;
	unsigned long prev;
	unsigned long cur;
	unsigned long  tmp;

	prevXtra = 0;
	prev = 1;
	printf("%lu", prev);
	curXtra = 0;
	cur = 2;
	for (cnt = 1; cnt < 98; cnt++)
	{
		if (curXtra)
		{
			printf(", %d%018lu", curXtra, cur);
		}
		else
		{
			printf(", %lu", cur);
		}
		tmp = prev + cur;
		tmpXtra = prevXtra + curXtra;
		if (tmp >= 1000000000000000000UL)
		{
			tmpXtra += tmp / 1000000000000000000UL;
			tmp = tmp % 1000000000000000000UL;
		}
		prev = cur;
		prevXtra = curXtra;
		cur = tmp;
		curXtra = tmpXtra;
	}
	printf("\n");

	return (0);
}
