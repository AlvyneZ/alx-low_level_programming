#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Performs the calculation given as a
 *  command line input
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *endptr1, *endptr2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}

	strtol(argv[1], &endptr1, 10);
	strtol(argv[3], &endptr2, 10);
	if ((*endptr1 != '\0') || (*endptr2 != '\0'))
	{
		printf("Error\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", (f(a, b)));
	return (0);
}
