#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print a password
 *
 * Return: Always 0.
 */
int main(void)
{
	int ind, len;
	char c;

	/* Use current time as seed for random generator */
	srand(time(0));

	/* Password length between 10 and 30 characters*/
	len = (rand() % 20) + 10;
	for (ind = 0; ind < len; ind++)
	{
		c = '!' + (rand() % 95);
		printf("%c", c);
	}
	printf("\n");
	
	return (0);
}
