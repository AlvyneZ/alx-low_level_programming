#include <stdio.h>
#include <stdlib.h>

/**
 * main- Adds all the numbers provided in command-line
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum, a;
	char *endptr;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		a = (int)strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (0);
		}
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
