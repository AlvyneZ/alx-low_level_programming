#include <stdio.h>

/**
 * main- Multiplies 2 numbers given in command-line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul, a, b;

	if (argc < 3)
		printf("Error\n");
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
