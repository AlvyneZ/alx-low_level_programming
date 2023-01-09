#include <stdio.h>
#include <stdlib.h>

/**
 * main- Multiplies 2 numbers given in command-line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return(0);
	}
	a = atoi(argv[1]);
	if ((a == 0) && (argv[1] != "0"))
	{
		printf("Error\n");
		return(0);
	}
	b = atoi(argv[2]);
	if ((b == 0) && (argv[2] != "0"))
	{
		printf("Error\n");
		return(0);
	}
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
