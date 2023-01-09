#include <stdio.h>
#include <stdlib.h>

/**
 * main- Calculates and prints the minimum number of
 *  coins ( 25, 10, 5, 2, and 1) needed to make change
 *  for an amount of money provided in command-line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const int coins[5] = {25, 10, 5, 2, 1};
	int i, sum, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	a = atoi(argv[1]);
	sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += (a / coins[i]);
		a = a % coins[i];
	}
	printf("%d\n", sum);
	return (0);
}
