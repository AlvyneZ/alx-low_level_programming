#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints a specified number of bytes of the
 *  proogram's opcode
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (a -1); i++)
	{
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("%02x\n", ((unsigned char *)main)[i]);
	return (0);
}
