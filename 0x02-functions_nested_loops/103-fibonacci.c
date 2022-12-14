#include <stdio.h>

/**
 * main- Print sum of even fibonacci numbers below 4000000
 * Return: 0
 */
int main(void)
{
	unsigned long sum;
	unsigned long prev;
	unsigned long cur;
	unsigned long  tmp;

	prev = 1;
	cur = 2;
	sum = 0;
	while (cur < 4000000UL)
	{
		if ((cur % 2) == 0)
			sum += cur;
		tmp = prev + cur;
		prev = cur;
		cur = tmp;
	}
	printf("%lu\n", sum);

	return (0);
}
