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

	len = rand() % 100;
	for (ind = 0; ind < len; ind++)
	{
		if ((rand() % 100) > 50)
			c = 'a' + (rand() % 26);
		else
			c = 'A' + (rand() % 26);
		printf("%c", c);
	}
	return (0);
}
