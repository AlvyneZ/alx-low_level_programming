#include <stdio.h>

/**
 * main- Print sum of multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int sum;
	int cur;

	sum = 0;
	for (cur = 1; (cur * 3) < 1024; cur++)
	{
		sum += cur * 3;
	}
	for (cur = 1; (cur * 5) < 1024; cur++)
	{
		if (cur % 3)
			sum += cur * 5;
	}
	printf("%d\n", sum);

	return (0);
}
