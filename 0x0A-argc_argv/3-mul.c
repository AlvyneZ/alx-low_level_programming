#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- Multiplies 2 numbers given in command-line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, a, b;
	char *endptr;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	a = (int)strtol(argv[1], &endptr, 10);
	if (*endptr != '\0')
	{
		printf("Error\n");
		return (0);
	}
	b = (int)strtol(argv[2], &endptr, 10);
	if (*endptr != '\0')
	{
		printf("Error\n");
		return (0);
	}
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
